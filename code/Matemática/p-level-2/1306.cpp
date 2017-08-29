/*
Nome:      Numerando Estradas
ID:        1306
Resposta:  Accepted
Linguagem: C++
Tempo:     0.052s
Tamanho:   700 Bytes
Submissao: 29/01/15 18:37:02
*/
#include <iostream>
using namespace std;

int main()
{
    int R, N, alphabeto, c = 1, ver;

    while(cin >> R >> N){

    if(R == 0 && N == 0)
        break;

    if(R == N || R < N){
        cout << "Case " << c << ": " << 0 << endl;
        c++;
        continue;
    }
    if(N * 2 > R){
        cout << "Case " << c << ": " << 1 << endl;
        c++;
        continue;
    }
    ver = R - N;

    if(ver % N != 0)
        alphabeto = ver / N + 1;
    else
        alphabeto = ver / N;

    if(alphabeto > 26)
        cout << "Case " << c << ": " << "impossible" << endl;
    else
        cout << "Case " << c << ": " << alphabeto << endl;

    c++;
    }
}
