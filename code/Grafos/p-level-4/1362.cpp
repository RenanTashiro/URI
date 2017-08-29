/*
Nome:      Minha Camiseta Me Serve
ID:        1362
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   1,28 KB
Submissao: 27/05/17 08:32:01
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

map<string, int> shirt = {
    {"XXL", 0},
    {"XL",  1},
    {"L",   2},
    {"M",   3},
    {"S",   4},
    {"XS",  5}
};

bool solve(int u, vi remaining, vii &volunteer)
{
    if(u == (int)volunteer.size())
    {
        return true;
    }

    bool ans = false;

    if(remaining[volunteer[u].first] > 0)
    {
        remaining[volunteer[u].first]--;
        ans = max(ans, solve(u + 1, remaining, volunteer));
        remaining[volunteer[u].first]++;
    }

    if(!ans && remaining[volunteer[u].second] > 0)
    {
        remaining[volunteer[u].second]--;
        ans = max(ans, solve(u + 1, remaining, volunteer));
        remaining[volunteer[u].second]++;
    }

    return ans;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, M;

        scanf("%d%d", &N, &M);

        vii volunteer(M);

        for(int i = 0; i < M; i++)
        {
            string a, b;

            cin >> a >> b;

            volunteer[i].first = shirt[a];
            volunteer[i].second = shirt[b];
        }

        printf("%s\n", solve(0, vi(6, N / 6), volunteer) ? "YES" : "NO");
    }
}