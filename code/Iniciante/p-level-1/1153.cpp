/*
Nome:      Fatorial Simples
ID:        1153
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   190 Bytes
Submissao: 10/01/15 10:09:30
*/
#include <iostream>
using namespace std;

int main()
{
    int n, f = 1, i = 0;
    cin >> n;

    while(i < n){
        f *= n;
        n -= 1;
    }
    cout << f << endl;
}
