#include <iostream>
using namespace std;

int main(){
  int soma = 0, num;

  cout << "Digite um inteiro, depois \'enter\'. Para terminar, digite 0 \n";
  cin >> num;

  while(num > 0){
    if(num % 3 == 0 && num % 5 != 0){
      soma += num;
    }
    
    cout << "Digite um novo número, depois \'enter\'. \n";
    cin >> num;
  }
  cout << "A soma dos divisíveis por 3 e não por 5: "<< soma << " \n";
  return 0;
}
