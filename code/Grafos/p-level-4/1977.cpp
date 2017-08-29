/*
Nome:      Não Posso me Atrasar
ID:        1977
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,52 KB
Submissao: 04/02/16 09:00:00
*/
#include <bits/stdc++.h>

using namespace std;

int dijkstra(map<string,map<string,int>> &G)
{
    priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;
    map<string,int> weight;
    pq.push({0, "varzea"}), weight["varzea"] = 0;
    while(!pq.empty()) {
        pair<int,string> u = pq.top(); pq.pop();
        if(u.first > weight[u.second]) continue;
        for(auto v : G[u.second]) {
            if(weight.find(v.first) == weight.end()) weight[v.first] = INT_MAX;
            if(u.first + v.second < weight[v.first]) {
                weight[v.first] = u.first + v.second;
                pq.push({weight[v.first], v.first});
            }
        }
    }
    return weight["alto"];
}

int main()
{
    ios::sync_with_stdio(false);

    int X, N, V;

    while(cin >> X >> N >> V && X != 0)
    {
        map<string,map<string,int>> G;

        string u, v;
        int time;

        for(int i = 0; i < N; i++) {
            cin >> u >> v >> time;
            G[u][v] = time;
        }

        int time_to = dijkstra(G), time_taken, hour;

        time_to += X <= 30 ? 30 : 50;
        time_taken = time_to;

        hour = (17 + time_to / 60) % 24;
        time_to %= 60;

        cout << (hour < 10 ? "0" : "")    << hour    << ':' <<
                (time_to < 10 ? "0" : "") << time_to <<  endl;

        if(time_taken > 60) {
            cout << "Ira se atrasar\n";
        }
        else {
            cout << "Nao ira se atrasar\n";
        }
    }
}