/*
Nome:      Fatorial
ID:        2129
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   529 Bytes
Submissao: 10/01/18 09:54:02
*/
#include <bits/stdc++.h>
using namespace std;

int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
 
int lastNon0Digit(int n)
{
     if (n < 10)
        return dig[n];
 
    if (((n/10)%10)%2 == 0)
        return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
    else
        return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
}

int main()
{
    int N, instance = 1;	

    while(cin >> N)
    {
        cout << "Instancia " << instance++ << endl;
        cout << lastNon0Digit(N) << endl;
        cout << endl;
    }
}

