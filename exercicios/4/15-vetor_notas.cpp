#include <iostream>
#include <vector>
#include "../genericos/funcoes_vector_int.cpp"

using namespace std;
const int L(10); //tamnho vetor

//calcula media dos valores inteiros num vetor
float media_vector_int(std::vector<int> vetor){
  double soma = 0;
  for (std::vector<int>::iterator it = vetor.begin() ; it != vetor.end(); ++it){
    soma += *it;
  }

  return soma / vetor.size();
}

int main() {
  vector<int> notas = randomVector(L);
  cout << "As notas são: \n";
  imprime_vector_int(notas);

  float media = media_vector_int(notas);
  cout << "A média de notas é: " << media << endl;

  for (std::vector<int>::iterator it = notas.begin() ; it != notas.end(); ++it){
    cout << "O desvio de " << *it << " à média é: " << *it - media << endl;
  }

  return 0;
}
