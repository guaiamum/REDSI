#include <iostream>

using namespace std;
int main() {
  int a,b;

  cout << "Digite um número, depois \'enter\'. Em seguida repita mais uma vez." << endl;
  cin >> a >> b;
  int soma = a + b;
  int mult = a * b;
  int media = soma / 2;
  cout << "Soma: " << soma << " Multiplicação: " << mult << " Média:" << media << endl;
  return 0;
}
