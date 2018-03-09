#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Conta {
private:
  int id;
public:
  std::string correntista;

  Conta(int id, std::string nome){
    id = id;
    correntista = nome;
  }

  void consoleConta(){
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
    this->num_contas++;
    // cout << "\tnumero de contas: " << num_contas << endl;

    Conta* cnt = new Conta(this->num_contas, nome);
    contas.push_back(cnt);
  }

  void consoleContas(){
    for (std::vector<Conta*>::iterator it = this->contas.begin(); it != this->contas.end(); ++it){
      (*it)->consoleConta();
      cout << "\n**********\n";
    }
    std::cout << '\n';
  }
};

int main() {
  ArrayContas contas;
  char opcao = 'z';

  while (opcao != 'q') {
    cout << "Digite a opção desejada: \n\t(a): Criar conta \n\t(b): Listar contas \n\t(q): Sair \n: ";
    cin >> opcao;

    if(opcao == 'a'){
      contas.novaConta();
      cout << "contas: " << contas.num_contas < endl;
    } else if(opcao == 'b'){
      contas.consoleContas();
      // cout << "Ainda não disponível! \n";
    }
  }


  return 0;
}
