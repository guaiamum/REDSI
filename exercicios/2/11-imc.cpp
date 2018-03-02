#include <iostream>
#include <math.h>

using namespace std;
int main(){
  float peso, altura, IMC = 0;

  cout << "Digite o peso (kg) e a altura (m), cada um seguido de \'enter\'.\n";
  cin >> peso >> altura;

  IMC = peso / pow(altura, 2);

  if(IMC <= 19){
    cout << "Peso abaixo do normal!";
  } else if (IMC <= 25){
    cout << "Peso normal!";
  } else if(IMC <= 30){
    cout << "Peso em excesso!";
  } else {
    cout << "Obesidade!";
  }

  return 0;
}


/*
IMC<=19 Peso abaixo do normal
19 < IMC <=25 Peso normal
25 < IMC <= 30 Peso em excesso
30< IMC Obesidade
*/
