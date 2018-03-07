/*
Nome:      Níveis de Klingon
ID:        1431
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.692s
Tamanho:   1,03 KB
Submissao: 15/09/17 19:47:26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N;

    while(cin >> N && N)
    {
        vector<int> division[N];

        for(int i = 0; i < N; i++)
        {
            int K;

            cin >> K;

            for(int j = 0; j < K; j++)
            {
                int nj;

                cin >> nj;

                division[i].push_back(nj);
            }

            sort(division[i].begin(), division[i].end());
        }

        int ans = INT_MAX;

        // O(T*N*log2(K)) ~ 1e8 -> TLE?
        for(int T = 0; T < 1000; T++)
        {
            int sum = 0;

            for(int i = 0; i < N; i++)
            {
                int basic = lower_bound(division[i].begin(), division[i].end(), T) - division[i].begin();
                int advanced = (int)division[i].size() - basic;

                sum += abs(advanced - basic);
            }

            ans = min(ans, sum);
        }

        cout << ans << endl;
    }
}
