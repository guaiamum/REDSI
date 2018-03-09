#include <vector>

void imprime_vector_int(std::vector<int> vetor){
  for (std::vector<int>::iterator it = vetor.begin() ; it != vetor.end(); ++it){
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
}


// FUNCAO DE RANDOMIZAR VECTOR DE L POSICOES
std::vector<int> randomVector(int L){
  std::vector<int> vetor;
  srand((unsigned)time(0));

  for(int i = 0; i < L; i++){
    vetor.push_back((rand()%100)+1);
  }

  return vetor;
}
