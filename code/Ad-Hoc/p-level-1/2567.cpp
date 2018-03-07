/*
Nome:      Virus
ID:        2567
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   448 Bytes
Submissao: 09/05/17 17:23:34
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        vector<int> virus(N);

        for(int i = 0; i < N; i++)
        {
            cin >> virus[i];
        }

        sort(virus.begin(), virus.end());

        int ans = 0;

        for(int i = 0; i < N / 2; i++)
        {
            ans += virus[N-i-1] - virus[i];
        }

        cout << ans << endl;
    }
}
