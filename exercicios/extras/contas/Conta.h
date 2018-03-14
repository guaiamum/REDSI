#include "Conta.cpp"

Conta::Conta(int id, std::string correntista){
  this->id = id;
  this->correntista = correntista;
  this->saldo = 0;
}

void Conta::consoleConta(){
  std::cout << "--------------------------------\n";
  std::cout << "\tConta número: " << id << std::endl;
  std::cout << "\tCorrentista: " << correntista << std::endl;
  std::cout << "\tSaldo: " << saldo << std::endl;
}
