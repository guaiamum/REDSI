#include <iostream>
#include <string>
#include <vector>

#include "Conta.cpp"

using namespace std;

class ArrayContas {
private:
 int num_contas;
public:
  vector<Conta*> contas;

  ArrayContas(){
    num_contas = 0;
  }

  void novaConta(){
    cout << "Entre com o primeiro nome do correntista: ";
    string nome;
    cin >> nome;
    num_contas++;

    Conta* cnt = new Conta(num_contas, nome);
    contas.push_back(cnt);
  }

  void consoleContas(){
    if(contas.size() == 0){
        cout << "\nNão há registros de contas! \n";
        return;
    }

    for (std::vector<Conta*>::iterator it = contas.begin(); it != contas.end(); ++it){
      (*it)->consoleConta();
    }
    std::cout << "\n********************\n";
  }
};

#endif
