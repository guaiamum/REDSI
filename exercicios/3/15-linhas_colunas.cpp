#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Introduza o seu primeiro nome: ";

  string nome;
  cin >> nome;

  const string cumpr = "Olá, " + nome + "!";

  const int brancos = 2; //numero de espacos brancos ao redor dos cumprimentos

  const int linhas = brancos * 2 + 3;
  const string::size_type colunas = cumpr.size() + brancos * 2 + 2;

  cout << endl;

  for (int lin_atual = 0; lin_atual != linhas; lin_atual++) { //loop linhas
    string::size_type col_atual = 0;

    while(col_atual != colunas){ //loop colunas
      //quando chegar no inicio do cumprimento, atualiza col_atual para o final dele
      if(lin_atual == brancos + 1 && col_atual == brancos + 1) {
        cout << cumpr + " "; //imprime cumprimentos e espaço ao final para compensar a !
        col_atual += cumpr.size();
      }
      //se nao estiver na linha do cumprimento
      else {
        //na primeira linha, na penultima e nas primeira coluna e penultima
        if (lin_atual == 0 || (lin_atual == linhas - 1) || col_atual == 0 || (col_atual == colunas - 1))
          cout << "∗" ;
        else
          cout << " " ;
        col_atual++;
      }
    }
    cout << endl;
  }

  return 0;
}
