#include <iostream>
#include <math.h>

float retornaPesoByImc(float IMC, float altura){
  return IMC * pow(altura,2);
}

using namespace std;
int main(){
  float altura, IMC = 0;

  cout << "Digite a altura em metros, seguida de \'enter\'.\n";
  cin >> altura;

  IMC = 19;
  cout << "Peso mínimo: " << retornaPesoByImc(IMC ,altura) << endl;

  IMC = 25;
  cout << "Peso máximo: " << retornaPesoByImc(IMC ,altura) << endl;


  return 0;
}
