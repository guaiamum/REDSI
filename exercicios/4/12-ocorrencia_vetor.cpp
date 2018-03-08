#include <iostream>
#include "../genericos/funcoes_vetor_int.cpp"

using namespace std;

// CONSTANTE TAMANHO VETOR:
int const L(100);
// FUNCAO DE ACHAR NUMERO EM VETOR E GRAVAR AS POSICOES
void findInArray(int *arr1,int *arr2, int find, int length);

//****** MAIN
int main(int argc, char const *argv[]) {
  int array[L];
  randomArr(array, L);
  imprimeVetorInt(array, L);

  int n;
  cout << "Digite um número a se procurar no vetor acima: ";
  cin >> n;

  int foundAtIndex[L] = {0};
  findInArray(array, foundAtIndex, n, L);

  cout << "Achamos " << n << " nos seguintes index: \n";
  imprimeVetorSeNaoZero(foundAtIndex,L);

  return 0;
}

void findInArray(int *arr1,int *arr2, int find, int length){
  int j = 0;

  for(int i = 0; i < length; i++){
    if(arr1[i] == find){
      arr2[j] = i;
      j++;
    }
  }

  return;
}
