#ifndef PILHANAVES_H
#define PILHANAVES_H

#include "TipoItem.h"
#include "TipoCelula.h"
#include "Pilha.h"

class PilhaNaves : public Pilha
{
public:
    PilhaNaves();
    virtual ~PilhaNaves();
    void Empilha(TipoItem item);
    TipoItem Desempilha();
    void Limpa();
    void Imprime();

private:
    TipoCelula *topo;
};

#endif // PILHANAVES_H