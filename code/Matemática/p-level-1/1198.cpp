/*
Nome:      O Bravo Guerreiro Hashmat
ID:        1198
Resposta:  Accepted
Linguagem: C++
Tempo:     0.660s
Tamanho:   269 Bytes
Submissao: 21/01/15 15:53:23
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int long long H, O, resultado;

    while(cin >> H >> O){
    if(H > O)
    resultado = H - O;
    else
    resultado = O - H;
    cout << resultado << endl;

    }
}
