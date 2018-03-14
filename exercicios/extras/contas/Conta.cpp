#ifndef Conta
#define Conta

#include <string>

class Conta {
private:
  int id;
  float saldo;
public:
  std::string correntista;

  Conta(int id, std::string correntista);

  void consoleConta();
};

#endif
