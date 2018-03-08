#include <iostream>
#include <vector>
#include "../genericos/funcoes_vector_int.cpp"

using namespace std;

int main() {
  vector<int> vetor;
  int valor = 0;

  while(valor != -1){
    cout << "Entre com um valor diferente de -1: ";
    cin >> valor;

    if(valor != -1){
      vetor.push_back(valor);
    }
  }
  
  imprime_vector_int(vetor);

  return 0;
}
