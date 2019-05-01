#include <stack>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    std::stack<char> pilha; // Declaracao da pilha
    int N;                  // Numero total e vagoes
    int count_i, count_j;   // Inteiros auxiliares
    char A[1000], B[1000];  // Vetores para guardar os dados de entrada A e saida B dos vagoes

    while (cin >> N && N)
    {
        for (count_i = 0; count_i < N; count_i++)
        {
            cin >> A[count_i];
        }
        for (count_i = 0; count_i < N; count_i++)
        {
            cin >> B[count_i];
        }
        // Zerar os contadores
        count_i = 0;
        count_j = 0;
        // Ultimo elemento dos arrays serao o caracter de escape '\0'
        A[N] = '\0';
        B[N] = '\0';
        while (1)
        {
            if (N > count_j && !pilha.empty() && pilha.top() == B[count_j])
            {
                cout << "R"; // Retirar
                count_j++;
                pilha.pop();
            }
            else if (N > count_i)
            {
                cout << "I"; // Inserir
                pilha.push(A[count_i]);
                count_i++;
            }
            else
            {
                break; // Encerrar
            }
        }

        if (pilha.empty())
        {
            cout <<  endl;
        }
        else
        {
            cout << " Impossible" << endl;
        }
        while (!pilha.empty())
        {
            pilha.pop();
        }
    }
    return 0;
}