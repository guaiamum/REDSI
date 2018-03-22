#include "IndiceAccao.h"

IndiceAccao::IndiceAccao(){
  return;
}

std::string IndiceAccao::acaoIndice(float indice){
  if(indice >= 0.6){
    return "Encerrar! ";
  }

  if(indice >= 0.5 && indice < 0.6){
    return "Instalar Ar condicionado! ";
  }

  if(indice <= 0.4){
    return "Rever entradas e saídas! ";
  }

  else {
    return "Índice inválido";
  }
  // >= 0.6; //encerrar
  // >= 0.5 && < 0.6; //ar condicionado
  // <= 0.4; //rever entradas e saidas
}
