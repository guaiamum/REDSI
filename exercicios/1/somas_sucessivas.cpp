#include <iostream>

using namespace std;
//FUNCTION TROCO
int main(){
  int a, b, prod = 0;

  cout << "Digite os números a serem multiplicados, seguidos de \'enter\'.\n";
  cin >> a >> b;

  for(int i = 0; i < a; i++){
    prod += b;
  }
  cout << "O produto é: "<< prod;
  return 0;
}
