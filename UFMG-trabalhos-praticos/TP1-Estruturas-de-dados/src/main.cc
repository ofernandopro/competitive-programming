#include <iostream>
#include "headers/TipoItem.h"
#include "headers/TipoCelula.h"
#include "headers/Pilha.h"
#include "headers/PilhaNaves.h"
#include "headers/Fila.h"
#include "headers/FilaAvaria.h"
#include "headers/Lista.h"
#include "headers/ListaCombate.h"

using namespace std;

int main()
{
    int num_frotas = 0;
    cin >> num_frotas;

    TipoItem x; // Item que será inserido em PilhaNaves
    PilhaNaves naves;

    for (int i = 0; i < num_frotas; i++)
    { // Lê os identificadores de todas as naves
        int idNave;
        cin >> idNave;
        x.SetChave(idNave); // Seta a chave do TipoItem x igual ao identificador da nave
        naves.Empilha(x);   // Empilha x na pilha naves
    }

    TipoItem y;
    ListaCombate navesCombate;

    FilaAvaria naveAvariada;
    int posAux;

    int operacao;
    while (scanf("%d", &operacao) != EOF)
    { // Caso seja 0, devemos enviar a nave mais apta ao combate
        if (operacao == 0)
        {
            y = naves.Desempilha();       // Retira a "nave" de PilhaNaves
            navesCombate.InsereInicio(y); // Insere essa "nave" em ListaCombate
            cout << "nave " << y.GetChave() << " em combate" << endl;
        }
        else if (operacao == -1)
        { // Caso seja -1, devemos retirar nave da avaria e colocar nas naves em espera para o combate
            TipoItem consertada;
            consertada = naveAvariada.Desenfileira(); // Retira nave consertada de FilaAvaria
            naves.Empilha(consertada);                // Empilha nave consertada em PilhaNaves
            cout << "nave " << consertada.GetChave() << " consertada" << endl;
        }
        else if (operacao == -2)
        { // Caso seja -2, devemos imprimir os identificadores de todas naves esperando para entrar em combate
            naves.Imprime();
        }
        else if (operacao == -3)
        { // Caso seja -3, devemos imprimir os identificadores de todas as naves que estão avariadas
            naveAvariada.Imprime();
        }
        else
        { // Caso seja outro valor, está implícito que este será o identificador de alguma nave já inserida, que significa que esta nave foi avariada
            cout << "nave " << operacao << " avariada" << endl;

            TipoItem ItemNaveAvariada;
            ItemNaveAvariada = navesCombate.Pesquisa(operacao); // Pesquisamos o identificador da nave informada em ListaCombate e retorna o identificador
            naveAvariada.Enfileira(ItemNaveAvariada);           // Enfileira este identificador em FilaAvaria

            posAux = navesCombate.PesquisaPosicao(operacao) + 1; // Pesquisa a posição da nave procurada em ListaCombate
            navesCombate.RemovePosicao(posAux);                  // Remove a nave da posição encontrada (ou seja, estamos removendo a nave avariada de ListaCombate)
        }
    }

    return 0;
}
