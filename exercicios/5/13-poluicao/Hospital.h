#ifndef Hospital_H
#define Hospital_H

#include <string>
using namespace std;

class Hospital{
  string nome;
  float indice;
public:
  Hospital();
  Hospital(string nome, float indice);
  Hospital(Hospital const &hospital);

  string getNome();
  float getIndice();
  static Hospital readHospital();
};

#endif
