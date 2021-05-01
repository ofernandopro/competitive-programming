#include "ListaCombate.h"
#include <iostream>

ListaCombate::ListaCombate() : Lista()
{
    primeiro = new TipoCelula();
    ultimo = primeiro;
}
ListaCombate::~ListaCombate()
{
    Limpa();
    delete primeiro;
}

// FUNÇÃO AUXILIAR: posiciona um apontador em uma determinada posição (célula) da lista:
TipoCelula *ListaCombate::Posiciona(int pos, bool antes = false)
{
    TipoCelula *p;
    int i;
    if ((pos > tamanho) || (pos <= 0))
        throw "ERRO: Posicao Invalida!";
    // Posiciona na célula anterior a desejada
    p = primeiro;
    for (i = 1; i < pos; i++)
    {
        p = p->prox;
    }
    // vai para a próxima
    // se antes for false
    if (!antes)
        p = p->prox;
    return p;
}

TipoItem ListaCombate::GetItem(int pos)
{
    TipoCelula *p;
    p = Posiciona(pos);
    return p->item;
}
void ListaCombate::SetItem(TipoItem item, int pos)
{
    TipoCelula *p;
    p = Posiciona(pos);
    p->item = item;
}

// OPERAÇÕES DE INSERÇÃO:

void ListaCombate::InsereInicio(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = primeiro->prox;
    primeiro->prox = nova;
    tamanho++;
    if (nova->prox == NULL)
        ultimo = nova;
};

void ListaCombate::InsereFinal(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    ultimo->prox = nova;
    ultimo = nova;
    tamanho++;
};

void ListaCombate::InserePosicao(TipoItem item, int pos)
{
    TipoCelula *p, *nova;
    p = Posiciona(pos, true); // posiciona na célula anterior
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = p->prox;
    p->prox = nova;
    tamanho++;
    if (nova->prox == NULL)
        ultimo = nova;
};

// OPERAÇÕES DE REMOÇÃO:

TipoItem ListaCombate::RemoveInicio()
{
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    p = primeiro->prox;
    primeiro->prox = p->prox;
    tamanho--;
    if (primeiro->prox == NULL)
        ultimo = primeiro;
    aux = p->item;
    delete p;
    return aux;
};

TipoItem ListaCombate::RemoveFinal()
{
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    // posiciona p na celula anterior à última
    p = Posiciona(tamanho, true);
    p->prox = NULL;
    tamanho--;
    aux = ultimo->item;
    delete ultimo;
    ultimo = p;
    return aux;
};

TipoItem ListaCombate::RemovePosicao(int pos)
{
    TipoItem aux;
    TipoCelula *p, *q;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    // posiciona p na celula anterior à pos
    p = Posiciona(pos, true);
    q = p->prox;
    p->prox = q->prox;
    tamanho--;
    aux = q->item;
    delete q;
    if (p->prox == NULL)
        ultimo = p;
    return aux;
};

// PESQUISA:

TipoItem ListaCombate::Pesquisa(TipoChave c)
{
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    p = primeiro->prox;
    aux.SetChave(-1);
    while (p != NULL)
    {
        if (p->item.GetChave() == c)
        {
            aux = p->item;
            break;
        }
        p = p->prox;
    }
    return aux;
};

int ListaCombate::PesquisaPosicao(TipoChave c)
{
    int pos = 0;
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    p = primeiro->prox;
    aux.SetChave(-1);
    while (p != NULL)
    {
        if (p->item.GetChave() == c)
        {
            aux = p->item;
            break;
        }
        p = p->prox;
        pos++;
    }
    return pos;
};

// IMPRIME:

void ListaCombate::Imprime()
{
    TipoCelula *p;
    p = primeiro->prox;
    while (p != NULL)
    {
        p->item.Imprime();
        p = p->prox;
    }
    printf("\n");
};

// LIMPA: (Percorre a lista desalocando memória)

void ListaCombate::Limpa()
{
    TipoCelula *p;
    p = primeiro->prox;
    while (p != NULL)
    {
        primeiro->prox = p->prox;
        delete p;
        p = primeiro->prox;
    }
    ultimo = primeiro;
    tamanho = 0;
};