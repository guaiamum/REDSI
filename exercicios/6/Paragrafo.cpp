#include "Paragrafo.h"
#include <iostream>

Paragrafo::Paragrafo(){
  texto = "";
  justificacao = 'e';
  espaco_antes = 1;
}

Paragrafo::Paragrafo(string texto){
  this->texto = texto;
  this->justificacao = 'e';
  this->espaco_antes = 1;
}

Paragrafo::Paragrafo(string texto, char justificacao, int espaco_antes){
  this->texto = texto;
  this->justificacao = justificacao;
  this->espaco_antes = espaco_antes;
}

Paragrafo::Paragrafo(Paragrafo const &para){
  this->texto = para.texto;
  this->justificacao = para.justificacao;
  this->espaco_antes = para.espaco_antes;
}

/**
  Overload do operador +, que junta o conteúdo do texto de dois paragrafos, mantendo as propriedades do primeiro.

  @param segundo paragrafo.
  @return apontador para novo paragrafo.
*/
Paragrafo Paragrafo::operator + (Paragrafo const &rhs){
  this->texto += rhs.texto;
  return *this;
}

/**
  Overload do operador =, que substitui o conteúdo do texto de um paragrafo, mantendo as propriedades do primeiro.

  @param segundo paragrafo.
  @return apontador para novo paragrafo.
*/
Paragrafo Paragrafo::operator = (Paragrafo const &rhs){
  this->texto = rhs.texto;
  return *this;
}

/**
  Imprime no console o conteudo do texto, precedido da qntd de espacos.

  @param nothing.
  @return nothing.
*/
void Paragrafo::printTexto(){
  for (int i = 0; i < this->espaco_antes; i++) {
    std::cout << ' ';
  }
  std::cout << this->texto << endl;
}

/**
  Retorna a contagem de caracteres do texto.

  @param nothing.
  @return tamanho da string texto.
*/
int Paragrafo::countChars(){
  return this->texto.size();
}
