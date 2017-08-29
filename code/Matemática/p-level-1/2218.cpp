/*
Nome:      O Temível Evil-Son
ID:        2218
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   332 Bytes
Submissao: 19/04/17 19:46:05
*/
#include <bits/stdc++.h>
using namespace std;

#define NUM 100000

int main()
{
    int sol[NUM] = {1};

    for(int i = 1; i < NUM; i++)
    {
        sol[i] = sol[i-1] + i;
    }

    int T;

    cin >> T;

    while(T--)
    {
        int N;

        cin >> N;

        cout << sol[N] << endl;
    }
}
