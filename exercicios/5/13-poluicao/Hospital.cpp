#include "Hospital.h"
#include <string>

Hospital::Hospital(){
  nome = "Sem nome";
  indice = 0;
}

Hospital::Hospital(string nome, float indice){
  this->nome = nome;
  this->indice = indice;
}

Hospital::Hospital(Hospital const &hospital){
  this->nome = hospital.nome;
  this->indice = hospital.indice;
}

std::string Hospital::getNome(){
  return this->nome;
}

float Hospital::getIndice(){
  return this->indice;
}

bool Hospital::operator < (Hospital const &rhs){
  if(this->indice < rhs.indice){
    return true;
  }
  return false;
}
