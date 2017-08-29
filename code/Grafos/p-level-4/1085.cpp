/*
Nome:      Babel
ID:        1085
Resposta:  Accepted
Linguagem: C++
Tempo:     0.544s
Tamanho:   1,87 KB
Submissao: 21/01/16 09:04:04
*/
#include <bits/stdc++.h>

#define DIST first
#define ID second.first
#define LST_C second.second
#define mk(x, y, z) {x,{y,z}}

using namespace std;

typedef vector<int> vi;
typedef pair<int,string> is;
typedef pair<int,pair<int,char>> iic;

int dijkstra(vector<vector<is>> &G, int src, int sink)
{
    priority_queue<iic, vector<iic>, greater<iic>> pq;
    vector<vi> dist(G.size(), vi(26, INT_MAX));
    pq.push(mk(0,src,'*'));
    for(int i = 0; i < 26; i++) dist[src][i] = 0;
    while(!pq.empty()) {
        iic u = pq.top(); pq.pop();
        if(u.DIST > dist[u.ID][u.LST_C-'a']) continue;
        for(is v : G[u.ID]) {
            int length = (int)v.second.size();
            if(u.LST_C != v.second[0] && u.DIST + length < dist[v.first][v.second[0]-'a']) {
                dist[v.first][v.second[0]-'a'] = u.DIST + length;
                pq.push(mk( dist[v.first][v.second[0]-'a'], v.first, v.second[0]));
            }
        }
    }
    int ans = INT_MAX;
    for(int i = 0; i < 26; i++) {
        ans = min(ans, dist[sink][i]);
    }
    return ans;
}

int main()
{
    int N;

    while(scanf("%d", &N) && N != 0)
    {
        unordered_map<string,int> H;
        string src, sink, u, v, word;
        int counter = 0;

        cin >> src >> sink;

        H[src] = counter++;
        H[sink] = counter++;

        vector<vector<is>> G(5000);

        for(int i = 0; i < N; i++) {
            cin >> u >> v >> word;
            if(H.find(u) == H.end())
                H[u] = counter++;
            if(H.find(v) == H.end())
                H[v] = counter++;
            G[H[u]].push_back(is(H[v], word));
            G[H[v]].push_back(is(H[u], word));
        }

        int ans = dijkstra(G, H[src], H[sink]);

        if(ans != INT_MAX)
            printf("%d\n", ans);
        else
            puts("impossivel");
    }
}
