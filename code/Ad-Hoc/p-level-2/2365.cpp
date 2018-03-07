/*
Nome:      Bolão do Brasileirão
ID:        2365
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,54 KB
Submissao: 16/09/17 00:18:17
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, N;

    while(cin >> P >> N && P)
    {
        vector<pair<int,string>> player(P);
        vector<pair<int,int>> hunch[P];

        for(int i = 0; i < P; i++)
        {
            cin >> player[i].second;

            player[i].first = 0;

            string a, b;
            int pa, pb;

            for(int j = 0; j < N; j++) {
                cin >> a >> pa >> b >> pb;
                hunch[i].push_back({pa, pb});
            }
        }

        for(int i = 0; i < N; i++)
        {
            string a, b;
            int pa, pb;

            cin >> a >> pa >> b >> pb;

            for(int j = 0; j < P; j++)
            {
                if(hunch[j][i].first == pa && hunch[j][i].second == pb)
                    player[j].first -= 10;
                else if(hunch[j][i].first > hunch[j][i].second && pa > pb || hunch[j][i].first == hunch[j][i].second && pa == pb || hunch[j][i].first < hunch[j][i].second && pa < pb)
                {
                    if(hunch[j][i].first == pa || hunch[j][i].second == pb)
                        player[j].first -= 7;
                    else
                        player[j].first -= 5;
                }
                else if(hunch[j][i].first == pa || hunch[j][i].second == pb)
                    player[j].first -= 2;
            }
        }

        sort(player.begin(), player.end());

        for(auto p : player)
            cout << p.second << ' ' << -p.first << endl;

    }
}
