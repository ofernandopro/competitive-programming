#include "FilaAvaria.h"
#include <iostream>

FilaAvaria::FilaAvaria() : Fila()
{
    frente = new TipoCelula; // Célula cabeça;
    tras = frente;           // Faz o frente e o tras apontarem para a mesma célula (célula cabeça)
}

FilaAvaria::~FilaAvaria()
{
    Limpa();
    delete frente; // Não vai restar nenhuma célula
}

void FilaAvaria::Enfileira(TipoItem item)
{
    TipoCelula *nova;
    nova = new TipoCelula(); // Criando nova célula (frente e trás apontando para a célula cabeça e esta apontando para null)

    nova->item = item; // Coloca o item que passamos como parâmetro nessa nova célula
    tras->prox = nova; // Faz o tras->prox (apontador da célula anterior apontar para a célula criada)
    tras = nova;       // Faz o tras apontar para essa célula, indicando que a próxima célula a ser inserida será nessa posição
    tamanho++;
}

TipoItem FilaAvaria::Desenfileira()
{
    TipoCelula *p;
    TipoItem aux;

    if (tamanho == 0)
        throw "Fila está vazia!";

    aux = frente->prox->item; // aux recebe o item da célula apontada por prox da célula apontada por frente
    p = frente;               // p será uma variável auxiliar para marcar a posição da çelula cabeça
    frente = frente->prox;    // Faz o frente ser igual ao seu apontador (faço ele apontar para o primeiro item)
    delete p;                 // Deleta a célula cabeça
    tamanho--;
    return aux;
    // O item da célula frente será "removido" pois agora a célula frente passará a ser a célula cabeça
}

void FilaAvaria::Limpa()
{ // Remove todas as células da fila, restando apenas a célula cabeça
    TipoCelula *p;
    p = frente->prox; // Faz uma célula auxiliar apontar para a primeira célula da fila (a primeira depois da célula cabeça)

    while (p != NULL)
    {
        frente->prox = p->prox; // Faz o apontador da célula frente apontar para a mesma célula que o p aponta
        delete p;
        p = frente->prox; // Faz o p apontar para a célula em que frente aponta
    }
    tamanho = 0;
    tras = frente; // Faz o trás apontar para o mesmo lugar que frente
}

void FilaAvaria::Imprime()
{ // Imprime todos os elementos da fila
    TipoCelula *p;
    p = frente->prox;
    while (p != NULL)
    {
        p->item.Imprime();
        printf("\n");
        p = p->prox;
    }
}