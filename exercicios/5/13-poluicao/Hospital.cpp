#include "Hospital.h"
// #include <iostream>
// using namespace std;

Hospital::Hospital(){
  nome = "Sem nome";
  indice = 0;
}

Hospital::Hospital(string nome, float indice){
  this->nome = nome;
  this->indice = indice;
}

Hospital::Hospital(Hospital const &hospital){
  this->nome = nome;
  this->indice = hospital.indice;
}

string Hospital::getNome(){
  return this->nome;
}

float Hospital::getIndice(){
  return this->indice;
}
