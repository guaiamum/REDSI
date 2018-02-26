#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float dur;

  cout << "Digite a duração da estada no parqueamento (em horas), seguido de \'enter\' \n";
  cin >> dur;

  float pagar = 0.8;

  if(dur <= 1){
    cout << "Valor a pagar: " << pagar;
  }
  else if(dur <= 4){
    pagar += (dur - 1) * 1;
    cout << "Valor a pagar: " << pagar;
  }
  else if(dur > 4){
    pagar += 2 + (dur - 3) * 1.2;
    cout << "Valor a pagar: " << pagar;
  }
  return 0;
}
