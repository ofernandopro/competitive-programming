#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include "TipoNo.h"

class ArvoreBinaria
{
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void Insere(TipoItem item);
    //void Caminha(int tipo);
    void Remove(TipoChave chave);
    void Limpa();
    int PreOrdem(TipoNo *p, int *posicao);
    int PesquisaNumEncrip(TipoChave chave);
    void PreOrdemDesencrip(TipoNo *p, int num);
    TipoNo *GetRaiz();

private:
    void InsereRecursivo(TipoNo *&p, TipoItem item);
    void ApagaRecursivo(TipoNo *p);
    void RemoveRecursivo(TipoNo *&p, TipoChave chave);
    void Antecessor(TipoNo *q, TipoNo *&r);
    int PesquisaNumEncripRecursivo(TipoNo *no, TipoChave chave);
    TipoNo *raiz;
};

#endif // ARVOREBINARIA_H