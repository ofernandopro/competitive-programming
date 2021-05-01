#include <cstdlib>
#include "TipoNo.h"
#include "ArvoreBinaria.h"

ArvoreBinaria::ArvoreBinaria()
{
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria()
{
    Limpa();
}

TipoNo *ArvoreBinaria::GetRaiz()
{
    return raiz;
}

void ArvoreBinaria::Insere(TipoItem item)
{
    InsereRecursivo(raiz, item);
}

void ArvoreBinaria::InsereRecursivo(TipoNo *&p, TipoItem item)
{
    if (p == NULL)
    { // Se é igual a nulo, achamos o lugar a ser inserido
        p = new TipoNo();
        p->item = item;
    }
    else
    {
        if (item.GetChave().compare(p->item.GetChave()) < 0) // Se o item a ser inserido for menor que o da raiz
            InsereRecursivo(p->esq, item);                   // Vai para o nó da esquerda
        else                                                 // Se for maior que a raiz
            InsereRecursivo(p->dir, item);
    }
}

void ArvoreBinaria::Remove(TipoChave chave)
{
    return RemoveRecursivo(raiz, chave);
}

void ArvoreBinaria::RemoveRecursivo(TipoNo *&no, TipoChave chave)
{
    TipoNo *aux;
    if (no == NULL)
    { // Se o nó é igual a nulo, significa que não está presente na árvore
        throw("Item nao está presente");
    }
    if (chave.compare(no->item.GetChave()) < 0) // Se for menor que o nó, vai pra subárvore da esquerda
        return RemoveRecursivo(no->esq, chave);
    else if (chave.compare(no->item.GetChave()) > 0) // Se for maior que o nó, vai pra subárvore da direita
        return RemoveRecursivo(no->dir, chave);
    else
    { // Se não é nem maior nem menor, significa que achamos o nó que queremos remover
        if (no->dir == NULL)
        { // Se o filho da direita desse nó que queremos remover for nulo...
            aux = no;
            no = no->esq; // Substitui o nó pelo filho da esquerda
            free(aux);
        }
        else if (no->esq == NULL)
        { // Se o filho da esquerda desse nó que queremos remover for nulo...
            aux = no;
            no = no->dir; // Substitui o nó pelo filho da direita
            free(aux);
        }
        else
        {                            // Quando o nó a ser removido possui 2 filhos:
            Antecessor(no, no->esq); // Acha o antecessor e já substitui
        }
    }
}

void ArvoreBinaria::Antecessor(TipoNo *q, TipoNo *&r)
{
    if (r->dir != NULL)
    {
        Antecessor(q, r->dir); // Chama antecessor até encontrar o elemento mais à direita da subárvore à esquerda do elemento que queremos remover
        return;
    }
    q->item = r->item; // Substitui o elemento removido pelo elemento mais à direita da subárvore à esquerda
    q = r;
    r = r->esq; // faz a raiz apontar para o filho da esquerda do elemento mais à direita
    free(q);    // Apaga o elemento mais à direita
}

int ArvoreBinaria::PreOrdem(TipoNo *p, int *posicao)
{
    if (p != NULL)
    {
        *posicao += 1;
        p->numEncrip = *posicao;
        PreOrdem(p->esq, posicao);
        PreOrdem(p->dir, posicao);
    }
    return *posicao;
}

void ArvoreBinaria::PreOrdemDesencrip(TipoNo *p, int num)
{
    if (p != NULL)
    {
        if (p->numEncrip == num)
        {
            p->item.Imprime();
        }
        PreOrdemDesencrip(p->esq, num);
        PreOrdemDesencrip(p->dir, num);
    }
}

void ArvoreBinaria::Limpa()
{
    ApagaRecursivo(raiz);
    raiz = NULL;
}
void ArvoreBinaria::ApagaRecursivo(TipoNo *p)
{
    if (p != NULL)
    {
        ApagaRecursivo(p->esq);
        ApagaRecursivo(p->dir);
        delete p;
    }
}

int ArvoreBinaria::PesquisaNumEncrip(TipoChave chave)
{
    return PesquisaNumEncripRecursivo(raiz, chave); //A cada nova chamada, passa-se a raiz da subárvore que está sendo verificada
}

int ArvoreBinaria::PesquisaNumEncripRecursivo(TipoNo *no, TipoChave chave)
{
    int aux;
    if (no == NULL)
    {            // Se o nó é nulo, significa que o elemento procurado não está presente na árvore
        aux = 0; // Flag para item não presente
        return aux;
    }
    if (chave.compare(no->item.GetChave()) < 0)
    {                                                      // Se elemento procurado é menor que o nó
        return PesquisaNumEncripRecursivo(no->esq, chave); // retorne a raiz da subárvore da esquerda
    }
    else if (chave.compare(no->item.GetChave()) > 0)
    {                                                      // Se elemento procurado é maior
        return PesquisaNumEncripRecursivo(no->dir, chave); // retorne a raiz da subárvore da direita
    }
    else
    { // Se não for nem maior nem menor, então é porque achamos o elemento
        return no->numEncrip;
    }
}