#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a, b, c;

  cout << "Digite cada coeficiente e o termo independente, seguidos de \'enter\'" << endl;
  cin >> a >> b >> c;

  float delta = (b * b) - 4 * a * c;

  if(delta < 0){
    cout << "Equação sem raízes reais!";
  }
  else if (delta == 0){
    float r0 = -b / (2 * a);

    cout << "Única raiz: " << r0;

  } else {
    float r1 = ((b * -1) - sqrt(delta) )/ (2 * a);
    float r2 = ((b * -1) + sqrt(delta) )/ (2 * a);

    cout << "\n--------------\n"
      << "Primeira raiz: " << r1 << endl
      << "Segunda raiz: " << r2 << endl;
  }

  return 0;
}
