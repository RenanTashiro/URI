/*
Nome:      Tipo de Combustível
ID:        1134
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   441 Bytes
Submissao: 09/01/15 14:54:56
*/
#include <iostream>
using namespace std;

int main()
{
    int V, alc = 0, gas = 0 , die = 0;

    while(V != 4){
        cin >> V;
    if(V == 1){
        alc += 1;
    }
    if(V == 2){
        gas += 1;
    }
    if(V == 3){
        die += 1;
    }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << die << endl;
}
