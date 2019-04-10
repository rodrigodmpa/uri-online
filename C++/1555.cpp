#include <iostream>
#include <algorithm>
 
using namespace std;
 
class Funcoes 
{   
    // Atributos públicos da classe
    public: 
    int x,y,rafael,beto,carlos; 
    
    // Construtor parametrizado para que possamos inicializar a classe com os atributos x e y e os valores dos participantes
    Funcoes(int a,int b)
    {   
        x=a;
        y=b;
        rafael = (3*x)*(3*x) + (y*y);
        beto = (2*x*x) + (5*y)*(5*y);
        carlos = (-(100)*x) + (y*y*y);
    } 

    // Metodo que printa na tela o vencedor
    void ganhador() 
    {   

        if (rafael > beto && rafael > carlos ){
            cout << "Rafael ganhou" << endl;
        } 
        else if ( beto > rafael && beto > carlos ){
            cout << "Beto ganhou" << endl;
        }
        else if (carlos > rafael && carlos > beto ){
            cout << "Carlos ganhou" << endl;
        }
    }
}; 

int main() {
 
    int x,y,count;
    cin >> count;
    for (int i = 0;i<count;i++){
        cin >> x >> y;
        // Instancia da classe funcao com os parametros que o construtor precisa
        Funcoes func(x,y);
        func.ganhador();
    }

    return 0;
}