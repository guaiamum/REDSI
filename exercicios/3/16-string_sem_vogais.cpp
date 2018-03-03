#include <iostream>
#include <string>

using namespace std;

bool isVogal(char letra);

int main(){
  cout << "Digite uma frase qualquer: ";

  const int tam_max = 100;
  char frase[tam_max] = {0};
  cin.getline(frase, tam_max);

  for (string::size_type i = 0; i < tam_max; i++) {
    if(!isVogal(frase[i]))
    cout << frase[i];
  }

  return 0;
}

bool isVogal(char letra){
  switch (letra) {
    case 'a':
      return true;
    case 'e':
      return true;
    case 'i':
      return true;
    case 'o':
      return true;
    case 'u':
      return true;
    case 'A':
      return true;
    case 'E':
      return true;
    case 'I':
      return true;
    case 'O':
      return true;
    case 'U':
      return true;
    default: return false;
  }
}
