#ifndef FILAAVARIA_H
#define FILAAVARIA_H

#include "TipoItem.h"
#include "TipoCelula.h"
#include "Fila.h"

class FilaAvaria : public Fila
{
public:
    FilaAvaria();
    virtual ~FilaAvaria();
    void Enfileira(TipoItem item);
    TipoItem Desenfileira();
    void Limpa();
    void Imprime();

private:
    TipoCelula *frente;
    TipoCelula *tras;
};

#endif // FILAAVARIA_H