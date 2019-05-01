#include <stack>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int N; // Qnt. de vagoes
    int count_i, count_j, parar, parar2; // Variaveis auxiliares
    int v[1001]; // Vetor para guardar as 1001 posicoes dos vagoes
    

    while(1)
    {
        cin >> N;
        if (N == 0) // Caso N seja 0, caso trivial de parada
            break;
        while (1)
        {
            
            stack<int> pilha; // Utilizando a pilha do c++
            parar = 0;
            parar2 = 0;
            count_j = 1;
            for (count_i = 1; count_i <= N; count_i++)
            {
                cin >> v[count_i]; // Recebe os valores
                if (v[count_i] == 0) // Se for zero, parar
                {
                    parar = 1;
                    cout << endl;
                    break;
                }
            }
            count_i = 1;
            while (1)
            {   
                if (count_i > N) // Caso qnt de vagoes maior que N, parar
                    break;
                if (parar2)
                    break;
                if (parar)
                    break;
                while (1)
                {
                    if (!pilha.empty() && pilha.top() == v[count_i]) // Retira o elemento do topo da pilha caso tudo ocorra certo
                    {
                        pilha.pop();
                        break;
                    }
                    else if (count_j <= N) // Coloca o elemento na pilha
                    {
                        pilha.push(count_j);
                        count_j++;
                        if (pilha.top() == v[count_i])
                        {
                            pilha.pop(); // Retira da pilha caso do topo
                            break;
                        }
                    }
                    else
                    {
                        parar2 = 1;
                        break;
                    }
                }
                count_i++;
            }
            if (parar)
                break;
            if (pilha.empty()) // Se no final tudo foi retirado da pilha, print Yes, else No
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}