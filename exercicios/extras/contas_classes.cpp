#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Conta {
private:
  int id;
public:
  std::string correntista;

  Conta(int id, std::string correntista){
    this->id = id;
    this->correntista = correntista;
  }

  void consoleConta(){
    cout << "--------------------------------\n";
    cout << "\tConta número: " << id << endl;
    cout << "\tCorrentista: " << correntista << endl;
  }
};

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

int main() {
  ArrayContas contas;
  char opcao = 'z';

  while (opcao != 'q') {
    cout << "\nDigite a opção desejada: \n\t(c): Criar conta \n\t(l): Listar contas \n\t(d): Deletar conta \n\t(q): Sair \n: ";
    cin >> opcao;

    if(opcao == 'c'){
      contas.novaConta();
    } else if(opcao == 'l'){
      contas.consoleContas();
    } else if(opcao == 'd'){
      cout << "Ainda não disponível! \n";
    }
  }


  return 0;
}
