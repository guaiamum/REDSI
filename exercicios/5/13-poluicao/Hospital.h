#ifndef Hospital_H
#define Hospital_H

#include <string>
using namespace std;

class Hospital{
  std::string nome;
  float indice;
public:
  Hospital();
  Hospital(std::string nome, float indice);
  Hospital(Hospital const &hospital);

  std::string getNome();
  float getIndice();
  static Hospital readHospital();
};

#endif
