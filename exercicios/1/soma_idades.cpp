#include <iostream>

using namespace std;
//FUNCTION TROCO
int main(){
  int soma = 0, idade;

  cout << "Digite a idade, depois \'enter\'. Para terminar, digite 0 \n";
  cin >> idade;

  while(idade > 0){
    cout << "Digite a idade, depois \'enter\'. \n";
    cin >> idade;

    soma += idade;
  }
  cout << "A soma das idades é: "<< soma << " \n";
  return 0;
}
