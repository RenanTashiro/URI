/*
Nome:      Menor e Posição
ID:        1180
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   506 Bytes
Submissao: 12/01/15 11:04:07
*/
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int X[N], posicao, menor;

    for(int i = 0; i < N; i++){

    cin >> X[i];

    }
    menor = X[0];
    posicao = 1;

    for(int ciclos = 1; ciclos < N; ciclos++){

        if(X[ciclos] < menor){
        menor = X[ciclos];
        if(X[posicao] != X[ciclos])
        posicao = ciclos;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
}
