#include <iostream>
#include <string>

using namespace std;

class Sapatos 
{   
    // Atributos públicos da classe
    public: 
    string procura,encontra;
	int qnt_fem,qnt_masc;
    
    /* Construtor parametrizado para que possamos inicializar a classe com os atributos, o sapato que procuro e o que encontro
	*  E as quantidades com zero.
	*/
    Sapatos(string a ,string b)
    {   
        procura = a;
        encontra = b;
		qnt_fem = 0;
		qnt_masc = 0;
    } 

    // Metodo que calcula a quantidade de sapatos que tenho interesse
    void calcula() 
    {   
		for(int i = 0; i < procura.length(); i += 5){
    		if(procura[i] == encontra[0] && procura[i+1] == encontra[1]){
    			if(procura[i+3] == 'M')
    				qnt_masc++;
    			else
    				qnt_fem++;
    		}
    	}
    }
}; 

int main() {
	string procura, encontra;
    int caso = 1;
    

    while(getline(cin, procura)){
    	
    	getline(cin, encontra);
    	
		Sapatos sapato(encontra,procura);

		sapato.calcula();

    	if(caso != 1)
    		cout << endl;
		
    	cout << "Caso "<< caso <<":" << endl;
    	cout << "Pares Iguais: " << sapato.qnt_masc + sapato.qnt_fem << endl;
    	cout << "F: " << sapato.qnt_fem << endl;
    	cout << "M: " << sapato.qnt_masc << endl;

    	caso++;
    }

    return 0;
}