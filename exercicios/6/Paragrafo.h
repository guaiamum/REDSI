#ifndef Paragrafo_H
#define Paragrafo_H

#include <string>
using namespace std;

class Paragrafo {
public:
  string texto;
  char justificacao; //'e' ou 'd'
  int espaco_antes;

  Paragrafo();
};

#endif
