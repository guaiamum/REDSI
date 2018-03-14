#include "Calc.h"

Calc::Calc(float x, float y){
  a = x;
  b = y;
}

float Calc::getSum(){
  return a + b;
}

float Calc::getTimes(){
  return a * b;
}

float Calc::getAvrg(){
  return this->getSum() / 2;
}
