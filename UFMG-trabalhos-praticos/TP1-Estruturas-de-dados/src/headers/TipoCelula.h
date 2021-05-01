#ifndef TIPOCELULA_H
#define TIPOCELULA_H

#include "TipoItem.h"

class TipoCelula
{
public:
    TipoCelula();

private:
    TipoItem item;    // Item da célula
    TipoCelula *prox; // Apontador para a próxima célula

    friend class PilhaNaves;   // Faz PilhaNaves poder acessar os atributos privados da classe TipoCelula
    friend class ListaCombate; // Faz ListaCombate poder acessar os atributos privados da classe TipoCelula
    friend class FilaAvaria;   // Faz FilaAvaria poder acessar os atributos privados da classe TipoCelula
};

#endif // TIPOCELULA_H