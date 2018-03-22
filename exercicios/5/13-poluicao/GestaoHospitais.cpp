#include "GestaoHospitais.h"
#include "Hospital.h"
#include <vector>
#include <iostream>
using namespace std;

GestaoHospitais::GestaoHospitais(){
  // std::vector<Hospital> hospitais = std::vector<Hospital>()
}

GestaoHospitais::GestaoHospitais(std::vector<Hospital> hospitais){
  this->hospitais = hospitais;
}

GestaoHospitais::GestaoHospitais(GestaoHospitais const &gestao){
  this->hospitais = hospitais;
}

void GestaoHospitais::addHospital(Hospital hospital){
  this->hospitais.push_back(hospital);
}

void GestaoHospitais::readHospital(){
  string nome;
  cout << "Entra com o nome do hospital: ";
  cin >> nome;
  float indice;
  cout << "Entra com o indice do hospital: ";
  cin >> indice;

  this->addHospital(Hospital(nome, indice));
}

void GestaoHospitais::readManyHospitais(){
  char continua = 's';

  while (continua == 's') {
    this->readHospital();
    cout << "\n-Digite (s) para continuar ou qualquer outra tecla para encerrar: ";
    cin >> continua;
  }
}

void GestaoHospitais::printAllHospitais(){
  std::cout << '\n';
  for (std::vector<Hospital>::iterator it = this->hospitais.begin() ; it != this->hospitais.end(); ++it){
    std::cout << " Nome: " << (*it).getNome() << " Indice: " << (*it).getIndice() << endl;
  }
  std::cout << '\n';
}

vector<Hospital> GestaoHospitais::getHospitais(){
  return this->hospitais;
}

int GestaoHospitais::getNumHospitais(){
  return this->hospitais.size();
}

Hospital* GestaoHospitais::findHospital(string nome){
  std::vector<Hospital>::iterator first = this->hospitais.begin(), last = this->hospitais.end();

  while (first != last) {
    if((*first).getNome() == nome){
      return &(*first);
    }
    ++first;
  }

  return nullptr;
}
