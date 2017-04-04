#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;

int main()
{
    int M, F, igual, contador = 1;
    string numero, numero_sexo, comparacao;

    while(cin >> numero, getline(cin, numero_sexo)){

        M = F = igual = 0;
        getchar();
        stringstream separa;
        separa << numero_sexo;
        while(separa >> comparacao){
            cout << comparacao << endl;
        }

   /* cout << "Caso " << contador << ":" << endl;
    cout << "Pares Iguais: " << igual << endl;
    cout << "F: " << F << endl << "M: " << M << endl;
    contador++; */
    }
}
