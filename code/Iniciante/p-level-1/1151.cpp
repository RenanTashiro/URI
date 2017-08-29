/*
Nome:      Fibonacci Fácil
ID:        1151
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   305 Bytes
Submissao: 10/01/15 10:04:05
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int F[n];
    F[0] = 0;
    F[1] = 1;
    cout << 0 << setw(2) << 1;
    for(int i = 2; i < n; i++){
    F[i] = F[i - 1] + F[i - 2];
    cout << " " << F[i];
    }
    cout << endl;
}
