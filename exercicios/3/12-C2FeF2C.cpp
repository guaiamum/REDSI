#include <iostream>
using namespace std;

void C2F();
void F2C();

int main()
{
  bool continua = true;
  char opcao;

  while (continua) {
    cout << "Digite:\n\t C para converter Celsius para Fahrenheit"
    << "\n\t F para o contrário"
    << "\n\t para sair digite Q\n";
    cin >> opcao;

    if(opcao == 'C' || opcao == 'c'){
      C2F();
    } else if(opcao == 'F' || opcao == 'f'){
      F2C();
    } else if(opcao == 'Q' || opcao == 'q'){
      continua = false;
    } else {
      cout << "\033[1;31m " << "Opção inválida" << " \033[0m\n";
    }
  }
  return 0;
}

void C2F(){
  double temp;
  cout << "Agora digite a temperatura em Celsius a converter: ";
  cin >> temp;

  cout << "\033[1;32m " << "Temperatura em Fahrenheit: " << 1.8 * temp + 32 << " \033[0m\n";
}

void F2C(){
  double temp;
  cout << "Agora digite a temperatura em Fahrenheit a converter: ";
  cin >> temp;

  cout << "\033[1;33m " << "Temperatura em Celsius: " << (temp - 32) / 1.8 << " \033[0m\n";
}
