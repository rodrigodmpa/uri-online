#include <iostream>
 
using namespace std;
 
class Sapatos 
{   
    // Atributos públicos da classe
    public: 
    int tamanho; 
    char genero;
    
    // Construtor parametrizado para que possamos inicializar a classe com os atributos tamanho e genero
    Sapatos(int a,char b)
    {   
        tamanho=a;
        genero=b;
    } 

    // Metodo que printa na tela o vencedor
    void ganhador() 
    {   
    }
}; 

int main() {
 
    int x,y,caracter;
    cin >> caracter;
    while(caracter) != EOF){
        cin >> x >> y;
        // Instancia da classe funcao com os parametros que o construtor precisa
        Funcoes func(x,y);
        func.ganhador();
    }

    return 0;
}