#ifndef GestaoHospitais_H
#define GestaoHospitais_H

#include "Hospital.h"
#include <vector>
using namespace std;

class GestaoHospitais{
  vector<Hospital> hospitais;
public:
  GestaoHospitais();
  GestaoHospitais(std::vector<Hospital> hospitais);
  GestaoHospitais(GestaoHospitais const &gestao);

  void addHospital(Hospital hospital);
  vector<Hospital> getHospitais();
  int getNumHospitais();

  void readHospital();
  void readManyHospitais();
  void printAllHospitais();
  /**
  Lista no console os Hospitais a encerrar por ordem decrescente
dos seus índices

    @param no parameter.
    @return nothing.
  */
  void printEndHospitais();

  Hospital* findHospital(string nome);
};

#endif
