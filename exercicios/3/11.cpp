#include <iostream>
using namespace std;

int main()
{
  float a , b , s , p , media ;
  cout << "Dois números? \n" ;
  cin >> a >> b ;

  s = a + b ;
  p = a * b ;
  media = (a + b) / 2;

  cout << "Soma= " << s << "\nProduto= "  << p << endl;
  cout << "Media= " << media << endl;
}
