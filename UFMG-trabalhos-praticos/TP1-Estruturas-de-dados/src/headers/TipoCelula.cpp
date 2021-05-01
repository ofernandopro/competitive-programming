#include "TipoCelula.h"
#include <iostream>

TipoCelula::TipoCelula()
{ // Inicializa a célula com a chave -1 e apontando para null
    item.SetChave(-1);
    prox = NULL;
}