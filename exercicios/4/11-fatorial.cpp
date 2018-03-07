#include <iostream>

using namespace std;

int fatorial(int n);
void fatorial(int n, int &fat);

int main() {
  while (true) {
    int n = 0, resultado = 0;
    while (n <= 0) {
      cout << "Digite um número inteiro maior que 0: ";
      cin >> n;
    }

    char opcao = 'z';
    while (opcao != 'a' && opcao != 'b' && opcao != 'q') {
      cout << "Digite a opcao: \n\t(a): funcao returnando fatorial \n\t(b): funcao void calcula fatorial \n\t(q): sair\n";
      cin >> opcao;
    }

    if(opcao == 'a'){
      resultado = fatorial(n);
    } else if(opcao == 'b'){
      fatorial(n,resultado);
    } else if(opcao == 'q'){
      return 0;
    }

    cout << "O fatorial de " << n << " é: " << resultado << endl;
  }

  return 0;
}



int fatorial(int n){
  int resultado = 1;
  fatorial(n, resultado);

  return resultado;
}

void fatorial(int n, int &resultado){
  resultado = 1;

  while(n > 0){
    resultado *= n;
    n--;
  }
  return;
}
