#include <iostream>
#include <utility>
#include <vector>
typedef long long ll;
#define f first
#define s second

using namespace std;
  
int main()
{
    pair<int, char> pair1;
    pair <string, double> pair2;
  
    pair1.first = 100;
    pair1.second = 'A';
  
    cout << pair1.first << " ";
    cout << pair1.second << endl;

    pair2 = make_pair("Fernando", 4.56);

    cout << pair2.first << " ";
    cout << pair2.second << endl;

    // Atribuindo valor:
    pair<int, ll> p = {1, 0};
    p.s = 2;
    cout << p.f << " " << p.s << endl;


    // VECTOR DE PAIR:

    // Como criar um vector de pair e passar valores para o pair através de for:
    vector<pair<int, int> > vectorPair;
    int i;
    for (i = 0; i < 3; i++) {
        pair<int, int> pair2;
        pair2 = make_pair(i, i*2);
        vectorPair.push_back(pair2);
    }

    // Como imprimir um vector de pair:
    for(int i = 0; i < vectorPair.size(); i++)
    {
        cout << vectorPair[i].first << " - " << vectorPair[i].second << endl;
    }   
  
    return 0;
}