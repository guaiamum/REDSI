#ifndef Paragrafo_H
#define Paragrafo_H

#include <string>
using namespace std;

class Paragrafo {
public:
  string texto; //uma linha de texto
  char justificacao; //'e' ou 'd'
  int espaco_antes; //tabulacao

  Paragrafo();
  Paragrafo(string texto);
  Paragrafo(string texto, char justificacao, int espaco_antes);
  Paragrafo(Paragrafo const &para);

  Paragrafo operator + (Paragrafo const &rhs);
  Paragrafo operator = (Paragrafo const &rhs);

  void printTexto();
  int countChars();
};

#endif
