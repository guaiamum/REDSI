#include <iostream>
#include "IndiceAccao.h"
#include "Hospital.h"
#include "GestaoHospitais.h"

using namespace std;

int main() {
  Hospital hsj = Hospital("Hosp SaoJoao", 0.3);

  GestaoHospitais gestao = GestaoHospitais();
  gestao.addHospital(hsj);
  gestao.readHospital();

  gestao.printAllHospitais();
  cout << "----------------------\n";

  cout << "\nEntre com o nome do hospital a pesquisar: ";
  string nome;
  cin >> nome;

  Hospital* achei = gestao.findHospital(nome);
  bool continua = true;

  if(achei){
    IndiceAccao indice = IndiceAccao();
    cout << "\tAcao para o hospital: " << achei->getNome() << " é de: \n\t"  <<
      indice.acaoIndice(achei->getIndice());
  } else {
    continua = false;
    cout << "\033[1;31m"<< "\tHospital não encontrado!" <<"\033[0m\n";
  }

  if(continua){
    if(hsj < *achei){
      cout << endl << hsj.getNome() << "(" << hsj.getIndice() << ") tem indice menor que: " << achei->getNome() << "(" << achei->getIndice() << ")\n";
    } else{
      cout << endl << hsj.getNome() << "(" << hsj.getIndice() << ") NÃO tem indice menor que: " << achei->getNome() << "(" << achei->getIndice() << ")\n";

    }
  }

  return 0;
}
