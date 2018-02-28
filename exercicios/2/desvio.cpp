#include <iostream>
#include <math.h>
using namespace std;

void imprimeArrayInt(int* arr){
  int n = sizeof(arr) / sizeof(int);

  for(int i = 0;i <= n;i++){
    cout << "\n\t" << arr[i] << endl;
  }
  return;
}

int main() {
  int n = 0;
  float media = 0;

  // *******LEITURA
  cout << "Digite o número de inteiros a ler \n";
  cin >> n;
  int arr[n];

  for(int i = 0;i < n;i++){
    cout << "Digite o " << i + 1 << "° número \n";
    cin >> arr[i];
    media += arr[i];
  }
  media = media / n; //DEBUG: cout << "Média: " << media << endl;

  // *******PROCESSAMENTO
  float variancia = 0;
  for(int i = 0;i < n;i++){
    variancia += pow(arr[i] - media,2);
  }
  variancia = variancia / n; //DEBUG: cout << "Variância: " << variancia << endl;
  float desvio = sqrt(variancia);

  cout << "Desvio: " << desvio;

  return 0;
}
