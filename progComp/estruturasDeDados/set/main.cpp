#include <iostream>
#include <iterator>
#include <set>

/** 
 * SET - Muito útil para eliminar elementos repetidos
 * 
 * size () - Retorna o número de elementos do set
 * max_size () - Retorna o número máximo de elementos que o set pode conter
 * empty () - Retorna se o set está vazio
 * insert(const g) - Adiciona um novo elemento ‘g’ ao set
 * erase(posição do iterador) - Remove o elemento na posição apontada pelo iterador
 * erase (const g) - Remove o valor ‘g’ do set
 * clear () - Remove todos os elementos do set
 * count(g) - Retorna 1 se o elemento g está presente no set e 0 se não está
 * 
 */

using namespace std;

int main()
{
	set<int> s1;

	// Insere elementos em ordem aleatória
	s1.insert(40); // O(log(s)) - log do tamanho do set
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	
	// Só um 50 será adicionado ao set
	s1.insert(50);
	s1.insert(10);

	// Printando set s1:
	set<int>::iterator itr;
	for (itr = s1.begin(); itr != s1.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;

	// Remove todos os elements maiores que 30 em s1
	s1.erase(s1.begin(), s1.find(30));
	for (itr = s1.begin(); itr != s1.end(); itr++) {
		cout << *itr << " ";
	}
  cout << endl;

	// Remove elemento com valor 40 em s1
	int num;
	num = s1.erase(40);
	for (itr = s1.begin(); itr != s1.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;

	return 0;
}
