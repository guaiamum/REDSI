#include <iostream>
#include "Conversao.h"

using namespace std;

int main() {
  float celcius = 18, fahrenheit = 70;
  Conversao c1 = Conversao(0,celcius,fahrenheit);
  // c1.consoleValues();
  cout << celcius << " celcius em fahrenheit: " << c1.c2F() << endl;
  cout << fahrenheit << " fahrenheit em celcius: " << c1.f2C() << endl;


  return 0;
}
