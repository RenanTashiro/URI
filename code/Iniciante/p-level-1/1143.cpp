/*
Nome:      Quadrado e ao Cubo
ID:        1143
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   233 Bytes
Submissao: 09/01/15 19:11:54
*/
#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int N = 0, n = 0;

    while(n < i){
        N++;
        cout << N << " " << N * N << " " << N * N * N << endl;
        n++;
    }
}
