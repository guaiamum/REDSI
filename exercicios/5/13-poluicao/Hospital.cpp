#include "Hospital.h"
#include <string>
#include <iostream>
// using namespace std;

Hospital::Hospital(){
  nome = "Sem nome";
  indice = 0;
}

Hospital::Hospital(string nome, float indice){
  this->nome = nome;
  // this->nome.copy(nome, sizeof(nome));
  this->indice = indice;

  // std::cout << this->nome;
}

Hospital::Hospital(Hospital const &hospital){
  this->nome = nome;
  this->indice = hospital.indice;
}

std::string Hospital::getNome(){
  // std::cout << this->nome;
  return this->nome;
}

float Hospital::getIndice(){
  return this->indice;
}
