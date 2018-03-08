#include <iostream>
#include <string>

using namespace std;

int contaPalavras(string frase);
void tiraEspacos(string &frase);

int main() {
  string frase;

  cout << "Entre com uma frase: ";
  getline(cin, frase);

  cout << "\nNúmero de palavras: "<< contaPalavras(frase);
  return 0;
}

int contaPalavras(string frase){
  tiraEspacos(frase);
  int count = 0;
  for (string::iterator it = frase.begin(); it != frase.end(); ++it){
    if(*it == ' '){
      count++;
    }
  }
  count++; //última palvra que nao seja um espaço
  return count;
}

// Retira espaços desnecessários na frase
void tiraEspacos(string &frase){
  bool temEspaco = true;
  while(temEspaco){
    if(frase.front() == ' '){
      frase = frase.substr(1,frase.length());
    } else if(frase.back() == ' '){
      frase = frase.substr(0,frase.length() - 1);
    } else {
      temEspaco = false;
    }
  }
  return;
}
