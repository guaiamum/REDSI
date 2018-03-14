#include <iostream>
#include "Calc.h"

using namespace std;

int main() {
  float x, y;

  cout << "Entre com dois números separados por \'enter\': ";
  cin >> x >> y;

  Calc c = Calc(x,y);

  cout << "Soma: " << c.getSum() << endl;
  cout << "Multiplicação: " << c.getTimes() << endl;
  cout << "Média: " << c.getAvrg() << endl;

  return 0;
}
