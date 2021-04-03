#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

  int i, j, count; // counters
  string word;

  cin >> word;
  int letterCounter[word.length()];

  pair<char, int> test;
  vector<pair<char, int> > vectorTest;

  for (i = 0; i < word.length(); i++)
  {
    letterCounter[i] = 1;
    for (j = i - 1; j >= 0; j--)
    {
      if (word[j] == word[i])
        letterCounter[i]++;
    }
    test.first = word[i];
    test.second = letterCounter[i];
    vectorTest.push_back(test);
  }

  pair<char, int> pairDef;
  vector<pair<char, int> > vector;

  i=0;
  for (i = 0; i < vectorTest.size(); i++)
  {
    for (j = i - 1; j >= 0; j--)
    {
      if (vectorTest[j].first == vectorTest[i].first){
        if(vectorTest[j].second > vectorTest[i].second){
          pairDef.first = vectorTest[j].first;
          pairDef.second = vectorTest[j].second;
          vector.push_back(pairDef);
        } else {
          pairDef.first = vectorTest[i].first;
          pairDef.second = vectorTest[i].second;
          vector.push_back(pairDef);
        }
      }else {
        count++;
      }
    }
    if(count == i){
      pairDef.first = vectorTest[i].first;
      pairDef.second = vectorTest[i].second;
      vector.push_back(pairDef);
    }
  }

  /*while(i < vectorTest.size()){
    if (vectorTest[i].second > 1)
      vectorTest.erase(vectorTest.begin() + i);
  }*/

  for (const auto &p : vector)
  {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}