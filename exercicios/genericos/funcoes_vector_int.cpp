#include <vector>

void imprime_vector_int(std::vector<int> vetor){
  for (std::vector<int>::iterator it = vetor.begin() ; it != vetor.end(); ++it){
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
}
