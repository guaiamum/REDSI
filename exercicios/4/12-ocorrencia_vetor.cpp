#include <iostream>
#include "../genericos/imprime_vetor_int.cpp"

using namespace std;

int const L(100);
void randomArr(int L);

int main(int argc, char const *argv[]) {
  randomArr(L);
  return 0;
}

void

void randomArr(int L){
  cout << "length: " << L;
  return;
}

// void diffVetor(int *arr1,int *arr2){
//   int n = 100;
//
//   if(n > 0){
//     cout << "\n\t Número de posições: " << n << endl;
//
//     for(int i = 0;i < n;i++){
//       cout << "\n\t" << arr[i] << endl;
//     }
//   }
//
//   return;
// }
