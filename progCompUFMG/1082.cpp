/*
#include <iostream>
#include <list>
using namespace std;

// Graph class represents a undirected graph
// using adjacency list representation
class Graph {
	int V; // No. of vertices

	// Pointer to an array qntCompConexosaining adjacency lists
	list<char>* adj;

	// A function used by DFS
	void DFSUtil(char v, bool visited[]);

public:
	Graph(int V); // Constructor
	~Graph();
	void addEdge(char v, char w);
	void connectedComponents();
};

// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int v = 0; v < V; v++)
		visited[v] = false;

	for (int v = 0; v < V; v++) {
		if (visited[v] == false) {
			// print all reachable vertices
			// from v
			DFSUtil(v, visited);

			cout << "\n";
		}
	}
	delete[] visited;
}

void Graph::DFSUtil(char v, bool visited[])
{
	// Mark the current node as visited and print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices
	// adjacent to this vertex
	list<char>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<char>[V];
}

Graph::~Graph() { delete[] adj; }

// method to add an undirected edge
void Graph::addEdge(char v, char w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

// Driver code
int main()
{
	// Create a graph given in the above diagram
	Graph g(6); // 5 vertices numbered from 0 to 4
	g.addEdge('a', 'b');
	g.addEdge('b', 'c');
	g.addEdge('c', 'a');
  g.addEdge('e', 'f');

	cout << "Following are connected components \n";
	g.connectedComponents();

	return 0;
}
*/
/*
// C++ program to print connected components in
// an undirected graph
#include <iostream>
#include <list>
using namespace std;

// Graph class represents a undirected graph
// using adjacency list representation
class Graph {
	int V; // No. of vertices

	// Pointer to an array qntCompConexosaining adjacency lists
	list<int>* adj;

	// A function used by DFS
	void DFSUtil(int v, bool visited[]);

public:
	Graph(int V); // Constructor
	~Graph();
	void addEdge(int v, int w);
	void connectedComponents();
};

// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int v = 0; v < V; v++)
		visited[v] = false;

  int qntConnectedComponents = 0;

	for (int v = 0; v < V; v++) {
		if (visited[v] == false) {
			// print all reachable vertices
			// from v
    qntConnectedComponents++;

			DFSUtil(v, visited);

			cout << "\n";
		}
	}
  cout << qntConnectedComponents << " connected components" << endl;

	delete[] visited;
}

void Graph::DFSUtil(int v, bool visited[])
{
	// Mark the current node as visited and print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices
	// adjacent to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

Graph::~Graph() { delete[] adj; }

// method to add an undirected edge
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

int getIntFromChar(char vChar) {

  switch (vChar) {
  case 'a':
    return 0;
    break;
  case 'b':
    return 1;
    break;
  case 'c':
    return 2;
    break;
  case 'd':
    return 3;
    break;
  case 'e':
    return 4;
    break;
  case 'f':
    return 5;
    break;
  case 'g':
    return 6;
    break;
  case 'h':
    return 7;
    break;
  case 'i':
    return 8;
    break;
  case 'j':
    return 9;
    break;
  case 'k':
    return 10;
    break;
  case 'l':
    return 11;
    break;
  case 'm':
    return 12;
    break;
  case 'n':
    return 13;
    break;
  case 'o':
    return 14;
    break;
  case 'p':
    return 15;
    break;
  case 'q':
    return 16;
    break;
  case 'r':
    return 17;
    break;
  case 's':
    return 18;
    break;
  case 't':
    return 19;
    break;
  case 'u':
    return 20;
    break;
  case 'v':
    return 21;
    break;
  case 'w':
    return 22;
    break;
  case 'x':
    return 23;
    break;
  case 'y':
    return 24;
    break;
  case 'z':
    return 25;
    break;
  default:
    break;
  }

}

int main()
{
  int n;
  cin >> n;
	// Create a graph given in the above diagram
	Graph g(n); // 5 vertices numbered from 0 to 4
	// g.addEdge(0, 1);
	// g.addEdge(1, 2);
	// g.addEdge(2, 0);
  // g.addEdge(4, 5);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(0, 6);
  g.addEdge(1, 2);
  g.addEdge(2, 6);
  g.addEdge(4, 3);
  g.addEdge(3, 5);
  g.addEdge(7, 8);
  g.addEdge(8, 9);
  g.addEdge(9, 7);

	cout << "Following are connected components \n";
	g.connectedComponents();

	return 0;
}
*/

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main() {

    int numCasoTeste = 1;
    int vertices, arestas, n;

    cin >> n;

    while (n--) {

        cin >> vertices;
				cin >> arestas;

        char a[vertices][vertices];
        memset(a, '#', sizeof(a));

        char origem, destino;

        for(int i = 0; i < vertices; i++) {
          a[i][0]= i + 97;
        }

        while(arestas--) {
					cin >> origem;
					cin >> destino;
					int oAux = origem - 97, dAux = destino - 97;
					a[oAux][dAux] = destino;
					a[dAux][oAux] = origem;
        }

        cout << "Case #" << numCasoTeste << ":" << endl;
				numCasoTeste++;

        int v[vertices];

        memset(v, -1, sizeof(v));

        int qntCompConexos = 0;

        for(int i = 0; i < vertices; i++) {
					bool linha = false;

					stack<char> t;

					if(v[i] == -1){
						t.push(i + 97);
						qntCompConexos++;
						v[i] = 1;
						linha = true;
					}

					stack<char> sChar;
					int comp = 0;

					while(!t.empty()){
						char top = t.top();
						if(comp != 0) {
							sChar.push(top);
						} else {
							cout << top << ",";
						}
						t.pop();
						comp++;

						for(int j = 0; j < vertices; j++) {
							if(a[top - 97][j] != '#') {
								if(v[a[top - 97][j] - 97] == -1) {
									linha = true;
									v[a[top - 97][j] - 97] = 1;
									t.push(a[top-97][j]);
								}
							}
						}

					}

					vector<char> sAux;

					while(!sChar.empty()) {
						char topChar = sChar.top();
						sAux.push_back(topChar);
						sChar.pop();
					}

					sort(sAux.begin(), sAux.end());

					for(int i = 0; i < sAux.size(); i++) {
						cout << sAux[i] << ",";
					}
					
					if(linha) {
						cout << endl;
					}
        }

        cout << qntCompConexos << " connected components" << endl;
        cout << endl;
    }

    return 0;

}