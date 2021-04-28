#include <iostream>
#include <iterator>
#include <map>

/**
 * Map: Permite usar um tipo qualquer como chave de acesse para algum elemento (de maneira
 * análoga a usar um int positivo como valor de acesso para um vector)
 * Extremamente útil para facilitar problemas de implementação
 * É uma estrutura ordenada, assim como o set
 * Para acessar um elemento no map: O(log(m*p))
 * 
*/
  
using namespace std;
  
int main()
{

    map<int, int> map1;
  
    map1.insert(pair<int, int>(1, 40));
    map1.insert(pair<int, int>(2, 30));
    map1.insert(pair<int, int>(3, 60));
    map1.insert(pair<int, int>(4, 20));
    map1.insert(pair<int, int>(5, 50));
    map1.insert(pair<int, int>(6, 50));
    map1.insert(pair<int, int>(7, 10));
  
    // Imprimindo o map1
    map<int, int>::iterator itr;
    cout << "Map 1: " << endl;
    for (itr = map1.begin(); itr != map1.end(); ++itr) {
        cout << itr->first << " " << itr->second << '\n';
    }
  
    // Atribuindo os elementos de map1 para map2
    map<int, int> map2(map1.begin(), map1.end());
  
    // Imprimindo o map2
    cout << "Map 2: " << endl;
    for (itr = map2.begin(); itr != map2.end(); ++itr) {
        cout << itr->first << " " << itr->second << '\n';
    }
  
    // Remove todos os elementos com chave menor que 3 em map2
    map2.erase(map2.begin(), map2.find(3));
    cout << "Map 2 sem elementos de chave menor que 3: " << endl;
    for (itr = map2.begin(); itr != map2.end(); ++itr) {
        cout << itr->first << " " << itr->second << '\n';
    }
  
    // Remove todos os elementos com chave = 4
    int num;
    num = map2.erase(4);
    cout << "Map 2 sem elementos de chave 4: " << endl;
    for (itr = map2.begin(); itr != map2.end(); ++itr) {
        cout << itr->first << " " << itr->second << '\n';
    }
    
    cout << endl;
    // lower bound e upper bound para o map1 key = 5
    cout << map1.lower_bound(5)->first << ' ';
    cout << map1.lower_bound(5)->second << endl;
    cout << map1.upper_bound(5)->first << ' ';
    cout << map1.upper_bound(5)->second << endl;



    // ------------------------ AULA MAP:

    map<string, int> mp;
    mp["ribossomo"] = 1;

    // Podemos acessar como se fosse um vetor, ao invés de acessar
    // por um índice inteiro, acessamos por um índice string:
    cout << mp["mitocondria"] << " " << mp["ribossomo"] << endl;
    // Output: 0 1 
    // (imprime 0 pois não declaramos o conteúdo da posição "mitocondria" e o tipo do 
    // conteúdo é inteiro, então ele cria essa chave "mitocondria" com conteúdo 0)

  
    return 0;
}