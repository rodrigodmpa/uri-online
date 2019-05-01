#include <iostream>
#include <cstdlib>
using namespace std;

// Tamanho da pilha
#define TAMANHO 10

// Classe chamada pilha
class pilha
{
	int *ponteiro;
	int topo;
	int capacidade;

public:
	// Construtor da pilha
	pilha(int tamanho = TAMANHO);

	// Métodos da pilha
	void push(int);
	void push2(int);
	int pop();
	int peek();

	int tamanho();
	bool ehVazia();
	bool ehCheia();
};

// Constructor to initialize pilha
pilha::pilha(int tamanho)
{
	ponteiro = new int[tamanho];
	capacidade = tamanho;
	topo = -1;
}

// Adicionar um elemento no topo pilha
void pilha::push(int x)
{
	if (ehCheia())
	{
		cout << "Pilha estourou\nPrograma encerrado\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserindo no topo" << x << endl;
	ponteiro[++topo] = x;
}

// retirar o elemento que está no topo da pilha
int pilha::pop()
{
	// checa se não está vazia antes de tirar
	if (ehVazia())
	{
		cout << "Pilha é vazia\nPrograma Encerrado\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removendo " << peek() << endl;

	// diminui o tamanho da pilha em 1 unidade e retorna o elemento retirado
	return ponteiro[topo--];
}

// Funcao que retorna o elemento do topo da pilha
int pilha::peek()
{
	if (!ehVazia())
		return ponteiro[topo];
	else
		exit(EXIT_FAILURE);
}

// Funcao que retorna o tamanho da pilha
int pilha::tamanho()
{
	return topo + 1;
}

// Funcao que checa se a pilha é vazia, retornando true caso seja
bool pilha::ehVazia()
{
	return topo == -1;
}

// Funcao que retorna true se a pilha está cheia
bool pilha::ehCheia()
{
	return topo == capacidade - 1;	// or return tamanho() == capacidade;
}

// Main
int main()
{
	pilha pt(3);

	pt.pop();
	pt.pop();

	pt.push(3);

	cout << "Elemento do topo eh: " << pt.peek() << endl;

	cout << "Tamanho da pilha eh: " << pt.tamanho() << endl;

	pt.pop();

	if (pt.ehVazia())
		cout << "Pilha está vazia\n";
	else
		cout << "Pilha está cheia\n";

	return 0;
}