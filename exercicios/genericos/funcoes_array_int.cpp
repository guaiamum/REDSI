#include <ctime>

using namespace std;

void imprimeVetorInt(int *arr, size_t n){
  // int n = sizeof(arr) / sizeof(int);
  if(n > 0){
    cout << "\n\t Número de posições: " << n << endl;

    for(int i = 0;i < n;i++){
      cout << "\n\t" << arr[i] << endl;
    }
  }

  return;
}


void imprimeVetorSeNaoZero(int *arr, size_t n){
  if(n > 0){
    // cout << "\n\t Número de posições: " << n << endl;
    for(int i = 0;i < n;i++){
      if(arr[i] != 0){
        cout << "\n\t" << arr[i] << endl;
      }
    }
  }

  return;
}

// FUNCAO DE RANDOMIZAR VETOR DE L POSICOES
void randomArr(int *array, int L){
  srand((unsigned)time(0));

  for(int i = 0; i < L; i++){
    array[i] = (rand()%100)+1;
    // DEBUG: cout << array[i] << "\t";
  }
  // DEBUG: cout << endl;
  return;
}
