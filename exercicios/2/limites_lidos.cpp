#include <iostream>
using namespace std;

int main() {
  int n, min, max;
  cout << "Digite inteiros, e te direi qual o menor e o maior. Para encerrar digite 0\n";
  cin >> n;
  min = max = n;

  while (n != 0) {
    if(n < min){
      min = n;
    }
    if(n > max){
      max = n;
    }

    cin >> n;
  }

  cout << "Menor: " << min << " Maior: " << max;
  return 0;
}
