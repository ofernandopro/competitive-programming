#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
  string nome;
  int titulosMundial, titulosLiberta, titulosCdb, titulosCampBr;
  int pontuacao;
};

int calculaPontuacao(int titulosMundial, int titulosLiberta, int titulosCampBr, int titulosCdb) {
  return (titulosMundial * 120 + titulosLiberta * 100 + titulosCampBr * 40 + titulosCdb * 20);
}

void calculaGrandeza(int pontuacao) {
  if (pontuacao >= 300) {
    cout << "Categoria: Gigante" << endl;
  } else if (pontuacao >= 150) {
    cout << "Categoria: Grande" << endl;
  } else if (pontuacao >= 70) {
    cout << "Categoria: Médio" << endl;
  } else {
    cout << "Categoria: Pequeno" << endl;
  }
}

bool comparacao(const Time & left, const Time & right)
{
    return left.pontuacao > right.pontuacao;
}

void imprimeTabelaClassificacao(vector<Time> times){
  cout << "Pos. |    Nome   | Pontuação | " << endl;
  int i;
  for (i = 0; i < times.size(); i++) {
    cout << i+1 << "º  |  " << times[i].nome << "  |  " << times[i].pontuacao << "  |" << endl;
  }
}


int main() {

  Time time;
  vector<Time> times;

  // Lê os times e insere no vector times
  while(1) {
  cout << "Digite o nome do seu time: (Caso não tenha mais nenhum time, digite \"nulo\") ";
    cin >> time.nome;
    if(time.nome == "nulo") break;

    cout << "Digite quantos Mundiais o seu time tem: ";
    cin >> time.titulosMundial;

    cout << "Digite quantas libertadores o seu time tem: ";
    cin >> time.titulosLiberta;

    cout << "Digite quantos Campeonatos Brasileiros o seu time tem: ";
    cin >> time.titulosCampBr;

    cout << "Digite quantas Copas do Brasil o seu time tem: ";
    cin >> time.titulosCdb;

    time.pontuacao = calculaPontuacao(time.titulosMundial, time.titulosLiberta, time.titulosCampBr, time.titulosCdb);
    cout << "O seu time tem " << time.pontuacao << " pontos." << endl;

    calculaGrandeza(time.pontuacao);
    times.push_back(time);

  }

  // Ordena de forma decrescente acordo com a pontuação de cada time
  sort(times.begin(), times.end(), comparacao);

  imprimeTabelaClassificacao(times);

  return 0;
}