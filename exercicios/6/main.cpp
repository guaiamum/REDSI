#include <iostream>

#include "../genericos/printOptions.cpp"
#include "Paragrafo.h"
#include "Editor.h"

using namespace std;

int main() {
  //OPCOES DO MENU
  string arr[] = {
    "(i): Inserir paragrafo",
    "(p): imPrimir paragrafos",
    "(j): Juntar paragrafos seguidos",
    "(n): Numero de paragrafos",
    "(e): Eliminar paragrafo",
    "(c): quantidade de Caracteres totais",
    "(m): quantidade de caracteres do Maior paragrafo",
    "(s): substitui texto de uma linha",
  };
  vector<string> opcoes (arr, arr + sizeof(arr)/sizeof(std::string));
  char opcao;
  //instacia Editor
  Editor e1 = Editor();

  while(opcao != 'q'){
    printAllOptions(opcoes);
    cout << "\nEntre com a opcao desejada, ou (q) para sair: ";
    cin >> opcao;

    if(opcao == 'i'){
      // cout << "\nEntre com uma linha: \n";
      cin.ignore(256, '\n');
      e1.readParagrafo();
    } else if(opcao == 'p'){
      cout << "\nEis os parágrafos: \n";
      e1.printParagrafos();
    } else if(opcao == 'j'){
      cout << "\nIndique a primeira linha a juntar: \n";
      int num;
      cin >> num;
      e1.joinParagrafosAt(num);
    } else if(opcao == 'n'){
      cout << "\nNúmero de parágrafos: " << e1.qtdParagrafos() << endl;
    } else if(opcao == 'e'){
      cout << "\nIndique o parágrafo a eliminar: \n";
      int num;
      cin >> num;
      e1.eraseParagrafo(num);
    } else if(opcao == 'c'){
      cout << "\nQuantidade de caracteres: " << e1.qtdCaracteres() << endl;
    } else if(opcao == 'm'){
      cout << "\nQuantidade de caracteres do maior paragrafo: " << e1.qtdCaracteresMaiorParagrafo() << endl;
    } else if(opcao == 's'){
      cout << "\nEntre com o numero da linha a substituir: \n";
      int num;
      cin >> num;
      cin.ignore(256, '\n');
      e1.replaceParagrafo(num);
    }
    // OPCAO INVALIDA
    else {
      cout << "\nOpção inválida!\n";

    }
  }

  return 0;
}
