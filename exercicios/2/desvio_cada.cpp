#include <iostream>
#include <math.h>
using namespace std;

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
  for(int i = 0;i < n;i++){
    float desvio = sqrt(pow(arr[i] - media,2));
    cout << "Desvio de " << arr[i] << " à média é: " << arr[i] - media << endl;
  }

  // cout << "Desvio: " << desvio;

  return 0;
}
