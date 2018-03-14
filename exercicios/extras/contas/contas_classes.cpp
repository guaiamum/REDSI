// #include <iostream>
// #include <string>
// #include <vector>

#include "Conta.h"
// #include "ArrayContas.cpp"

using namespace std;

int main() {
  Conta c1(1,"eu");
  c1.consoleConta();

  return 0;
}

// int main() {
//   ArrayContas contas;
//   char opcao = 'z';
//
//   while (opcao != 'q') {
//     cout << "\nDigite a opção desejada: \n\t(c): Criar conta \n\t(l): Listar contas \n\t(d): Deletar conta \n\t(q): Sair \n: ";
//     cin >> opcao;
//
//     if(opcao == 'c'){
//       contas.novaConta();
//     } else if(opcao == 'l'){
//       contas.consoleContas();
//     } else if(opcao == 'd'){
//       cout << "Ainda não disponível! \n";
//     }
//   }
//
//
//   return 0;
// }
