#include <iostream>
#include "../genericos/imprime_vetor_int.cpp"
#include <ctime>

using namespace std;

int const L(100);
void randomArr(int L);

int main(int argc, char const *argv[]) {
  
  randomArr(L);
  
  int n;
  cout << "Digite um número a se procura em um vetor aleatório: ";
  cin >> n;
  
  return 0;
}

void

void randomArr(int *array, int L){
  srand((unsigned)time(0)); 
     
  for(int i = 0; i < L; i++){ 
    array[i] = (rand()%100)+1;        
    cout << array[i] << endl;
  } 
  return;
}

void diffVetor(int *arr1,int *arr2, int n,int length){
  int j = 0;
  for(int i = 0; i < length; i++){
    if(arr1[i] == n){
      arr2[j] 0 i;
      j++;
    }
  }

  return;
}
