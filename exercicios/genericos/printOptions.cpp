#include <iostream>
#include <vector>

using namespace std;

void printAllOptions(vector<string> options){
  std::cout << "\n--------------------------\n";
  for (std::vector<string>::iterator it = options.begin() ; it != options.end(); ++it){
    std::cout << ' ' << *it << endl;
  }
  std::cout << '\n';
}
