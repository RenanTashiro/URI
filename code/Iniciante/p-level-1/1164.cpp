/*
Nome:      Número Perfeito
ID:        1164
Resposta:  Accepted
Linguagem: C++
Tempo:     0.120s
Tamanho:   454 Bytes
Submissao: 11/01/15 07:46:37
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, divisores, teste;

    for(int i = 0; i < n; i++){

    cin >> x;

    teste = 1;
    divisores = 0;

    while(teste < x){

    if(x % teste == 0)
    divisores += teste;

    teste++;

    }

    if(divisores == x)
        cout << x << " eh perfeito" << endl;

    else
        cout << x << " nao eh perfeito" << endl;
    }

}
