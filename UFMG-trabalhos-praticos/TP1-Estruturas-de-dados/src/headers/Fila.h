#ifndef FILA_H
#define FILA_H

#include "TipoItem.h"

class Fila
{
public:
    Fila() { tamanho = 0; }; // Inicia o tamanho com 0
    int GetTamanho() { return tamanho; };
    bool Vazia() { return tamanho == 0; };
    virtual void Enfileira(TipoItem item) = 0;
    virtual TipoItem Desenfileira() = 0;
    virtual void Limpa() = 0;

protected:
    int tamanho;
};

#endif // FILA_H