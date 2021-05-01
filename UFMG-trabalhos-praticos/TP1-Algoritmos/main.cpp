#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <map>
#include <list>

using namespace std;

// Calcula a distância máxima a ser percorrida de acordo com a incrementoTemperatura
int calculaDistMax(int incrementoTemp)
{
  return (30 / incrementoTemp);
}

// Função recursiva para imprimir os vértices 
// vizinhos de um vértice até uma distância k 
// (utiliza o conceito de Depth-First Search em grafos)
void dfs(int k, int vertice,
         int verticePai,
         const vector<vector<int> >& tree, int* vetor, int &contador) {
 
    // Condição base
    if (k < 0){
      return;
    }
 
    // Coloca o valor do vértice em vetor[contador]
    vetor[contador] = vertice;
    contador = contador + 1;
 
    // Percorre os nós 
    // conectados (lista de adjacência)
    for (int i : tree[vertice]) {
 
        if (i != verticePai) {
 
            // O vértice i se torna o verticePai
            // do seu vértice filho
            dfs(k - 1, i, vertice, tree, vetor, contador);
        }
    }
}

// Funções checa ciclos:

bool possuiCicloUtil(int v, bool visitado[], bool *pilhaRec, std::vector<vector<int> > tree) 
{ 
    if(visitado[v] == false) 
    { 
        // Marca o vértice atual como visitado e a pilha de recursão
        visitado[v] = true; 
        pilhaRec[v] = true; 
  
        // Recorre para todos os vértices adjacentes a este vértice
        vector<int>::iterator i; 
        for(i = tree[v].begin(); i != tree[v].end(); ++i) 
        { 
            if ( !visitado[*i] && possuiCicloUtil(*i, visitado, pilhaRec, tree) ) 
                return false; 
            else if (pilhaRec[*i]) 
                return true; 
        } 
  
    } 
    pilhaRec[v] = false;  // Remove o vértice da pilha de recursão 
    return false; 
} 
  
// Retorna true se o grafo contém um ciclo, se não, retorna false. 
bool possuiCiclo(int qntVertices, std::vector<vector<int> > tree) 
{ 
    // Marca todos os vértices como não visitado e como não parte da
    // pilha de recursão
    bool *visitado = new bool[qntVertices]; 
    bool *pilhaRec = new bool[qntVertices]; 
    for(int i = 0; i < qntVertices; i++) 
    { 
        visitado[i] = false; 
        pilhaRec[i] = false; 
    } 
  
    // Chama a função recursiva para detectar ciclo
    for(int i = 1; i <= qntVertices; i++) 
        if (possuiCicloUtil(i, visitado, pilhaRec, tree)) 
            return true; 
  
    return false; 
} 

// ------------------------------- main:

int main()
{

  vector<vector<int> > CD; // Vector de vector que armazena os postos adjacentes de todos os centros de distribuição
  vector<vector<int> > PV; // Vector de vector que armazena os postos adjacentes de todos os postos de vacinação

  int qnt_CD, qnt_PV, incrementoTemp; // Quantidade de Centros de Distribuição, Quantidade de Postos de Vacinação, Incremento de Temperatura
  cin >> qnt_CD >> qnt_PV >> incrementoTemp;

  int distMax = calculaDistMax(incrementoTemp);
  int num_CD, num_PV;      // Número de cada CD ou PV que será lido
  int i, j;                // iteradores
  string line;             // String para ler dinamicamente para parar quando o usuário digitar enter
  bool iterator = false;   // Iterador para facilitar a leitura dinâmica dos CDs e PVs

  vector<int> line_CD;           // Vetor que armazena uma lista de adjacência de um vértice do vetor CD
  vector<int> line_PV;           // Vetor que armazena uma lista de adjacência de um vértice do vetor PV
  set<int> setPV;                // Set que armazena todos os postos que são alcançáveis (sem repetição)
  
  // Cria um outro vetor de vetores auxiliar que será usado na função dfs e nas de checagem de ciclos
  vector<vector<int> > tree(qnt_CD+qnt_PV + 1, vector<int>());
  
  // Lê os centros de distribuição:
  for (i = 0; i < qnt_CD; i++)
  {
    if(i == 1 && iterator == false){
      i--;
      iterator = true;
    }
    getline(cin, line);
    istringstream is(line);
    while (is >> num_CD)
    {
      line_CD.push_back(num_CD);
    }
    CD.push_back(line_CD);
    line_CD.clear();
  }

  PV.push_back(line_CD);

  // Lê os postos de vacinação:
  for (i = 0; i < qnt_PV; i++)
  {
    getline(cin, line);
    istringstream is(line);
    while (is >> num_PV && num_PV != 0)
    {
      line_PV.push_back(num_PV);
      if(qnt_CD == 1){
        tree[i].push_back(num_PV);
      } else {
        tree[i+1].push_back(num_PV);
      }
    }
    PV.push_back(line_PV);
    line_PV.clear();
  }

  // Imprime quais e quantos postos são alcançáveis:

  if(distMax > 0){

    int contador = 0;
    int m=0;
    int vetor[250];                 // Array auxiliar para guardar os postos alcançáveis (ainda com repetições)
    vector<int> postosAlcancaveis;  // Vetor que armazena todos os postos que são alcançáveis
    for(m=0; m<250; m++){
      vetor[m] = 0; // Inicializa todos os elementos do vetor como 0
    }

    // Chama a função dfs para achar os postos alcançáveis (com repetição):
    int k = 0, l=0;
    if(qnt_CD == 1) {
      dfs(distMax-1, 1, -1, tree, vetor, contador);
    } 
    else if(qnt_CD > 1){
      for (l=0; l < CD.size(); l++){
        for (k=0; k < CD[l].size(); k++){
            dfs(distMax-1, CD[l][k], -1, tree, vetor, contador);
        }
      }
    }
    // Passa os elementos do array para um vector:
    int h=0;
    for(h=0; h<250; h++) {
      if(vetor[h] != 0){
        postosAlcancaveis.push_back(vetor[h]);
      }
    }
    // Passa os elementos do vector para um set (para imprimir ordenado e sem repetições):
    for (auto i = postosAlcancaveis.begin(); i != postosAlcancaveis.end(); ++i)
        setPV.insert(*i);
    
    cout << setPV.size() << endl; // Imprime quantos postos são alcançáveis
    for (auto i = setPV.begin(); i != setPV.end(); ++i)
        cout << *i << " "; // Imprime todos os postos alcançáveis sem repetições
    cout << endl;


    // Chama função para checar se o grafo contém ciclos:
    k = 0;
    l=0;
    bool contemCiclo;
    for (l=0; l < PV.size(); l++){
        if(possuiCiclo(qnt_PV, tree)){
          contemCiclo = true;
        } else {
          contemCiclo = false;
        }
    }

    if(contemCiclo == true){
      cout << "1" << endl;
    } else {
      cout << "0" << endl;
    }
    
  } else { // Caso a distância máxima seja 0, imprimir 0, *, 0
    cout << "0" << endl;
    cout << "*" << endl;
    cout << "0" << endl;
  }

  return 0;
}
