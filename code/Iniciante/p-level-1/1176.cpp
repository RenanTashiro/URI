/*
Nome:      Fibonacci em Vetor
ID:        1176
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   449 Bytes
Submissao: 11/01/15 13:55:07
*/
#include <iostream>
using namespace std;

int main()
{
    int T, fib, aux;
    int long long Fib[61];
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> fib;

    Fib[0] = 0;
    Fib[1] = 1;
    aux = 2;
        if(fib != 0 || fib != 1){
        while(aux < fib + 1){

        Fib[aux] = Fib[aux - 1] + Fib[aux  - 2];
        aux++;
        }}

    cout << "Fib(" << fib << ") = " << Fib[fib] << endl;
    }
}
