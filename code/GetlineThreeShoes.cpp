#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int M, F, igual, contador = 1;
    string numero, numero_sexo, comparacao;

    while(cin >> numero,getline(cin, numero_sexo) ){

        stringstream separa;
        separa << numero_sexo;

        M = F = igual = 0;

            while(separa >> comparacao){
                if(comparacao == numero)
                    igual++;
                else if(comparacao == "M")
                    M++;
                else
                    F++;
            }
    cout << "Caso " << contador << ":" << endl;
    cout << "Pares Iguais: " << igual << endl;
    cout << "F: " << F << endl << "M: " << M << endl;
    }
}
