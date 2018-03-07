/*
Nome:      Polígonos Regulares Construtíveis
ID:        1577
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.368s
Tamanho:   736 Bytes
Submissao: 16/09/17 10:57:15
*/
#include <bits/stdc++.h>
using namespace std;

//vector<int> fermet = {3, 5, 15, 17, 51, 85, 255, 257, 771, 1285, 3855, 4369, 13107, 21845, 65535, 65537, 196611, 327685, 983055};
vector<int> fermet = {3, 5, 17, 257, 65537};

bool is_constructive(int N)
{
    while(N % 2 == 0)
        N /= 2;

    for(int f : fermet)
        if(N % f == 0) N /= f;

    return N == 1;
}

int main()
{
    bool constructive[1000001] = {false};

    for(int i = 3; i <= 1000000; i++)
        constructive[i] = is_constructive(i);

    int T;

    cin >> T;

    while(T--)
    {
        int N;

        cin >> N;

        if(constructive[N])
            puts("Yes");
        else
            puts("No");
    }
}

