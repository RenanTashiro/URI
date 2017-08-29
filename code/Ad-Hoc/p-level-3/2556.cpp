/*
Nome:      Reinauguração do CEI
ID:        2556
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   353 Bytes
Submissao: 16/05/17 17:35:39
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        vector<int> guest(N);

        for(int i = 0; i < N; i++)
        {
            cin >> guest[i];
        }

        sort(guest.begin(), guest.end());

        cout << N / 2 << ' ' << guest[N/2] - guest[N/2-1] << endl;
    }
}
