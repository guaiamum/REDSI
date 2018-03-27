#include "Editor.h"
#include <iostream>

Editor::Editor(){
  return;
}

/**
  Lê uma linha(string) do console e insere no final do editor.

  @param nothing.
  @return nothing.
*/
void Editor::readParagrafo(){
  std::cout << "\nEntre com uma linha: \n";
  string line;
  std::getline (std::cin,line);
  insertParagrafo(line);
}

/**
  Insere um paragrafo(linha) no vector do editor.

  @param string linha.
  @return nothing.
*/
void Editor::insertParagrafo(string line){
  Paragrafo p = Paragrafo(line);
  this->paragrafos.push_back(p);
}

/**
  Imprime todo o conteúdo do editor no console.

  @param nothing.
  @return nothing.
*/
void Editor::printParagrafos(){
  if(this->paragrafos.size() == 0){
    cout << "NAO HÁ PARÁGRAFOS! \n";
    return;
  }

  for(int i = 0; i < this->paragrafos.size();i++){
    std::cout << i + 1;
    this->paragrafos.at(i).printTexto();
  }
  std::cout << '\n';
}

/**
  Dado numero de uma linha, junta o seu conteúdo com o da linha seguinte, por fim elimando a segunda .

  @param primeira linha.
  @return nothing.
*/
void Editor::joinParagrafosAt(int where){
  if(where <= 0 || where >= this->paragrafos.size()){
    std::cout << "\nPosicao inválida!\n";
    return;
  }
  this->paragrafos.at(where - 1) + this->paragrafos.at(where);
  this->paragrafos.erase(this->paragrafos.begin() + where );
}

/**
  Elimina a linha do editor.

  @param numero da linha.
  @return nothing.
*/
void Editor::eraseParagrafo(int where){
  if(where <= 0 || where > this->paragrafos.size()){
    std::cout << "\nPosicao inválida!\n";
    return;
  }
  this->paragrafos.erase(this->paragrafos.begin() + (where - 1));
  cout << "\nLinha " << where << " eliminada com sucesso!\n";
}

/**
  Substitui a linha do editor.

  @param numero da linha.
  @return nothing.
*/
void Editor::replaceParagrafo(int where){
  if(where <= 0 || where > this->paragrafos.size()){
    std::cout << "\nPosicao inválida!\n";
    return;
  }
  std::cout << "\nEntre com uma linha: \n";
  string line;
  std::getline (std::cin,line);

  this->paragrafos.at(where - 1) = Paragrafo(line);

  cout << "\nLinha " << where << " substituida com sucesso!\n";
}

/**
  Conta o numero de parágrafos do editor.

  @param nothing.
  @return inteiro com o número de linhas(paragrafos) contidos no editor.
*/
int Editor::qtdParagrafos(){
  return this->paragrafos.size();
}

/**
  Conta o numero de caracteres em cada paragrafo do editor.

  @param nothing.
  @return inteiro com o número de caracteres contidos no editor.
*/
int Editor::qtdCaracteres(){
  int count = 0;
  for(int i = 0; i < this->paragrafos.size();i++){
    count += this->paragrafos.at(i).countChars();
  }
  return count;
}

/**
  Conta o numero de caracteres do maior paragrafo do editor.

  @param nothing.
  @return inteiro com o número de caracteres contidos no maior paragrafo.
*/
int Editor::qtdCaracteresMaiorParagrafo(){
  int count = 0;
  for(int i = 0; i < this->paragrafos.size();i++){
    int temp = this->paragrafos.at(i).countChars();
    if(temp >= count){
      count += this->paragrafos.at(i).countChars();
    }
  }
  return count;
}
