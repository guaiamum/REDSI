#include <iostream>
#include "Conversao.h"

Conversao::Conversao(){
  this->x = 0;
  this->celcius = 0;
  this->fahrenheit = 32;
}

Conversao::Conversao(float x, float c, float f){
  this->x = x;
  this->celcius = c;
  this->fahrenheit = f;
}

Conversao::Conversao(Conversao const &c){
  this->x = c.x;
  this->celcius = c.celcius;
  this->fahrenheit = c.fahrenheit;
}

float Conversao::getX(){
  return x;
}

void Conversao::incrementX(){
  this->x++;
}

float Conversao::f2C(){
  return (fahrenheit - 32) / 1.8;
}

float Conversao::c2F(){
  return (celcius * 1.8)  + 32;
}

void Conversao::consoleValues(){
  std::cout << "\tX: " << x << std::endl;
  std::cout << "\tCelcius: " << celcius << std::endl;
  std::cout << "\tFahrenheit: " << fahrenheit << std::endl;
}
