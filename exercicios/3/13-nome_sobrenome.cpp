#include <iostream>
#include <string>

using namespace std;

int main(){
  string apelido, nome, nome_completo;

  cout << "Digite seu apelido: ";
  cin >> apelido;

  cout << "Agora digite seu nome próprio: ";
  cin >> nome;

  nome_completo = nome + " " + apelido;
  cout << "Seu nome completo: " << nome_completo;
  return 0;
}
