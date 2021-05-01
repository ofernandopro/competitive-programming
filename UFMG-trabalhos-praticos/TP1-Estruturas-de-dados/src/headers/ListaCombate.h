#ifndef LISTACOMBATE_H
#define LISTACOMBATE_H

#include "TipoItem.h"
#include "TipoCelula.h"
#include "Lista.h"

class ListaCombate : public Lista
{
public:
    ListaCombate();
    ~ListaCombate();
    TipoItem GetItem(int pos);
    void SetItem(TipoItem item, int pos);
    void InsereInicio(TipoItem item);
    void InsereFinal(TipoItem item);
    void InserePosicao(TipoItem item, int pos);
    TipoItem RemoveInicio();
    TipoItem RemoveFinal();
    TipoItem RemovePosicao(int pos);
    TipoItem Pesquisa(TipoChave c);
    int PesquisaPosicao(TipoChave c);
    void Imprime();
    void Limpa();

private:
    TipoCelula *primeiro;
    TipoCelula *ultimo;
    TipoCelula *Posiciona(int pos, bool antes);
};

#endif // LISTACOMBATE_H
