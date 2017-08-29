/*
Nome:      Jogo do Tijolo
ID:        1436
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   319 Bytes
Submissao: 22/01/15 16:00:12
*/
#include <iostream>
using namespace std;

int main()
{
    int T, N, team[10], aux;
    cin >> T;

    for(int i = 0; i < T; i++){

     cin >> N;

     for(int x = 0; x < N; x++){
        cin >> team[x];
     }
     aux = N / 2;
        cout << "Case " << i + 1 << ": " << team[aux]<< endl;
    }
}
