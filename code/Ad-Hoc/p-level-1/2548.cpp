/*
Nome:      Museu Virtual 3D
ID:        2548
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   433 Bytes
Submissao: 09/05/17 17:38:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        vector<int> data(N);

        for(int i = 0; i < N; i++)
        {
            cin >> data[i];
        }

        sort(data.rbegin(), data.rend());

        int ans = 0;

        for(int i= 0; i < M; i++)
        {
            ans += data[i];
        }

        cout << ans << endl;
    }
}
