#include <iostream>
#include <queue>

using namespace std;

/*
fila.empty() - testa se fila está vazia
fila.size() - retorna o tamanho da fila
fila.front() - imprime primeiro elemento
fila.back() - imprime último elemento
fila.push() - insere elemento (ao final da fila pois é uma fila)
fila.pop() - remove elemento (o primeiro)
swap(fila, fila2) - troca os elementos de fila pelos de fila2
*/

// Imprime a fila
void imprimir(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << g.front() << " ";
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue<int> fila;
  queue<int> fila2;

  fila.push(10);
  fila.push(5);
  fila.push(7);

  fila2.push(20);
  fila2.push(25);
  fila2.push(26);
  fila2.push(27);

	imprimir(fila);
  imprimir(fila2);

	cout << "Imprime o tamanho: " << fila.size() << endl;
	cout << "Imprime o primeiro elemento a entrar: " << fila.front() << endl;;
	cout << "Imprime o último elemento a entrar: " << fila.back() << endl;
	cout << "Remove o último elemento: ";
	fila.pop();
	imprimir(fila);

  swap(fila, fila2); // Troca os elementos de fila com fila2

  cout << fila.front() << endl; // Imprime 20
  cout << fila2.front() << endl; // Imprime 5

	return 0;
}
