#include <iostream>
#include "../genericos/imprime_vetor_int.cpp"
using namespace std;

int main() {
  int n = 0;

  while(n <= 0){
    cout << "Digite o número de elementos do vetor: ";
    cin >> n;
  }
  
  int arr[n];

  for(int i = 0;i < n;i++){
    cout << "Digite um número: ";
    cin >> arr[i];
  }

  imprimeVetorInt(arr);

  return 0;
}
