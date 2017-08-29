/*
Nome:      Acácias
ID:        1956
Resposta:  Accepted
Linguagem: C++
Tempo:     1.880s
Tamanho:   1,4 KB
Submissao: 02/01/16 07:26:34
*/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<long long> vi;
typedef pair<long long,long long> ii;
 
vi taken;
priority_queue<ii> pq;
 
void process(long long vtx, list<ii> *graph)
{
    taken[vtx] = 1;
    for(auto& a : graph[vtx]) {
        ii v = a;
        if(!taken[v.first]) pq.push(ii(-v.second, -v.first));
    }
}
 
long long prim(list<ii> *graph, long long ori)
{
    process(ori, graph);
    long long min_cost = 0;
    while(!pq.empty()) {
        ii v = pq.top(); pq.pop();
        long long u = -v.second, w = -v.first;
        if(!taken[u]) {
            min_cost += w, process(u, graph);
        }
    }
    return min_cost;
}
 
int main()
{
    ios::sync_with_stdio(false);
 
    long long N;
 
    cin >> N;
 
    list<ii> graph[N+1]; // (Connection, Weight)
 
    for(long long i = 1; i < N; i++) {
        long long k;
        cin >> k;
        for(long long j = 0; j < k; j++) {
            long long dest, weight;
            cin >> dest >> weight;
            graph[i].push_back(ii(dest, weight));
            graph[dest].push_back(ii(i, weight));
        }
    }
 
    long long tot_cost = 0, family = 0;
 
    taken.assign(N+1, 0);
 
    for(long long i = 1; i <= N; i++) {
        if(!taken[i]) {
            tot_cost += prim(graph, i);
            family++;
        }
    }
 
    cout << family << ' ' << tot_cost << endl;
}