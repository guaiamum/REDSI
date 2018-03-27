#ifndef Editor_H
#define Editor_H

#include <vector>
#include "Paragrafo.h"

class Editor {
public:
  vector<Paragrafo> paragrafos;

  Editor();

  void insertParagrafo(string line);
  void readParagrafo();
  void readManyParagrafos();
  void printParagrafos();
  void joinParagrafosAt(int where);
  void eraseParagrafo(int where);
  void replaceParagrafo(int where);
  int qtdParagrafos();
  int qtdCaracteres();
  int qtdCaracteresMaiorParagrafo();
};

#endif
