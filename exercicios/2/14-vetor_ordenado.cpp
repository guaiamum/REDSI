#include <iostream>
#include "../genericos/imprime_vetor_int.cpp"
#include "../genericos/troca.cpp"
using namespace std;

int main() {
  int n = 0;

  while(n <= 0){
    cout << "Digite o número de elementos do vetor: ";
    cin >> n;
  }

  int arr[n];

  for(int i = 0;i < n;i++){
    int temp;
    cout << "Digite o " << i + 1 << "° número: ";
    cin >> temp;

    for(int j = 0;j < i;j++){
      if(arr[j] > temp){
        troca(&arr[j], &temp);
      }
    }
    arr[i] = temp;
  }

  imprimeVetorInt(arr,n);

  return 0;
}
