#include "PilhaNaves.h"
#include <iostream>

PilhaNaves::PilhaNaves() : Pilha()
{
    topo = NULL; // Pilha vazia com tamanho = 0 e apontando pra null
}

PilhaNaves::~PilhaNaves()
{
    Limpa();
}

void PilhaNaves::Empilha(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula(); // Cria nova célula (inicializa com o campo item = -1 e apontador = null)
    nova->item = item;       // O campo item da nova célula é igual ao item que foi passado como parâmetro
    nova->prox = topo;       // O campo prox dessa nova célula vai apontar pra célula onde o topo apontava (Como a lista estava vazia, vai continuar apontando para null)
    topo = nova;             // topo aponta para essa nova célula
    tamanho++;
};

TipoItem PilhaNaves::Desempilha()
{
    TipoItem aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "A pilha está vazia!";

    aux = topo->item;  // Armazena o item da célula que está no topo na variável aux
    p = topo;          // Faz uma variável auxiliar p apontar para o topo
    topo = topo->prox; // Faz o topo apontar para a célula de baixo (Se a pilha só tiver 1 elemento, estamos fazendo topo apontar para null)
    delete p;          // Deleta a célula p
    tamanho--;
    return aux;
};

void PilhaNaves::Limpa()
{
    while (!Vazia())
        Desempilha();
}

void PilhaNaves::Imprime()
{ // Imprime todos os elementos da pilha
    TipoCelula *p;
    p = topo;
    while (p != NULL)
    {
        p->item.Imprime();
        printf("\n");
        p = p->prox;
    }
}