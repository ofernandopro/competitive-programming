#include <iostream>
#include <stack>

using namespace std;

/*

empty() - Retorna se a pilha está vazia - Tempo: O(1)
size() - Retorna o tamanho da pilha - Tempo: O(1)
top() - Retorna uma referência ao elemento mais alto da pilha - Tempo: O(1)
push(g) - Adiciona o elemento g no topo da pilha - Tempo: O(1)
pop() - Exclui o elemento do topo da pilha - Tempo: O(1)

*/

int main() {

	stack<int> pilha;
	pilha.push(21);
	pilha.push(22);
	pilha.push(24);
	pilha.push(25);
	
	pilha.pop(); // Exclui 25
	pilha.pop(); // Exclui 24

	cout << "Elemento mais recente: " << pilha.top() << endl;


  if (pilha.empty())
    cout << "Pilha vazia" << endl;
  else
    cout << "Pilha não vazia" << endl;


  // Tamanho da pilha:
  cout << "Tamanho da pilha: " << pilha.size() << endl;


  // Imprimir Pilha:
	while (!pilha.empty()) {
		cout << pilha.top() << ' ';
		pilha.pop();
	}
  cout << endl;


  // SWAP:

  stack<int> pilha2, pilha3;
  
  pilha2.push (10); pilha2.push(20); pilha2.push(30); 
  pilha3.push (111); pilha3.push(222);

  pilha2.swap(pilha3);

  // Imprime pilha3:
	while (!pilha2.empty()) {
		cout << pilha2.top() << ' ';
		pilha2.pop();
	}
  cout << endl;

  // Imprime pilha2:
	while (!pilha3.empty()) {
		cout << pilha3.top() << ' ';
		pilha3.pop();
	}
  cout << endl;


  return 0;
}
