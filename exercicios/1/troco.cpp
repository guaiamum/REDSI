#include <iostream>

using namespace std;
//FUNCTION TROCO
void troco(){
  int soma = 0, valor = 45;
  int m5 = 0, m10 = 0, m20 = 0, m50 = 0, m100 = 0;
  //int *arr_moedas = new int[size]; delete [] arr_moedas;

  while(soma < 45 || soma > 140){
    cout << "Digite um valor entre 45 e 140, depois \'enter\'." << endl; //" Em seguida repita mais uma vez." << endl;
    cin >> soma;
  }

  int troco = soma - valor;

  cout << "Troco: " << troco << endl;
  while (troco > 0){
    if(troco - 100 >= 0){
      troco = troco - 100;
      m100++;
    }
    else if(troco - 50 >= 0){
      troco = troco - 50;
      m50++;
    }
    else if(troco - 20 >= 0){
      troco = troco - 20;
      m20++;
    }
    else if(troco - 10 >= 0){
      troco = troco - 10;
      m10++;
    }
    else if(troco - 5 >= 0){
      troco = troco - 5;
      m5++;
    }
  }

  // PRINT COINS
  cout << "Moedas de 5: " << m5 << endl;
  cout << "Moedas de 10: " << m10 << endl;
  cout << "Moedas de 20: "  << m20 << endl;
  cout << "Moedas de 50: "  << m50 << endl;
  cout << "Moedas de 100: "  << m100 << endl;

}


int main() {
  char continuar;
  cout << "Digite y para continuar e depois \'enter\'." << endl;
  cin >> continuar;

  while(continuar == 'y'){
    troco();
    cout << endl << "Digite y para continuar e depois \'enter\'." << endl;
    cin >> continuar;
  }
  return 0;
}
