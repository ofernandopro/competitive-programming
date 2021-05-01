#include <iostream>
#include <string>
#include "headers/TipoItem.h"
#include "headers/TipoNo.h"
#include "headers/ArvoreBinaria.h"

using namespace std;

int main()
{
    int i, numOperacoes, numPalavras, numEncriptacoes;
    char operacao;
    string palavra, stringRetirada, stringInserida;
    TipoItem ItemPalavra, palavraASerInserida;
    ArvoreBinaria idioma;

    cin >> numOperacoes;

    for (i = 0; i < numOperacoes; i++)
    {
        int posicao = 0;
        idioma.PreOrdem(idioma.GetRaiz(), &posicao);

        cin >> operacao;
        if (operacao == 'i')
        {
            cin >> palavra;
            ItemPalavra.SetChave(palavra);
            idioma.Insere(ItemPalavra);
        }
        else if (operacao == 's')
        {
            cin >> stringRetirada;
            cin >> stringInserida;
            palavraASerInserida.SetChave(stringInserida);
            idioma.Insere(palavraASerInserida);
            idioma.Remove(stringRetirada);
        }
        else if (operacao == 'e')
        {
            cin >> numPalavras;
            int cont;
            string palavras[numPalavras];

            for (cont = 0; cont < numPalavras; cont++)
            {
                cin >> palavras[cont];
                cout << idioma.PesquisaNumEncrip(palavras[cont]) << " ";
            }
            cout << endl;
        }
        else if (operacao == 'd')
        {
            int j;
            cin >> numEncriptacoes;
            int palavrasEncriptadas[numEncriptacoes];

            for (j = 0; j < numEncriptacoes; j++)
            {
                cin >> palavrasEncriptadas[j];
                idioma.PreOrdemDesencrip(idioma.GetRaiz(), palavrasEncriptadas[j]);
            }
            cout << endl;
        }
    }
    return 0;
}
