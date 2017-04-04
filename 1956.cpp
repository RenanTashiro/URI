#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> ii;
 
vi taken;
priority_queue<ii> pq;
 
void process(int vtx, list<ii> *graph)
{
    taken[vtx] = 1;
    for(auto& a : graph[vtx]) {
        ii v = a;
        if(!taken[v.first]) pq.push(ii(-v.second, -v.first));
    }
}
 
int prim(list<ii> *graph, int ori)
{
    process(ori, graph);
    int min_cost = 0;
    while(!pq.empty()) {
        ii v = pq.top(); pq.pop();
        int u = -v.second, w = -v.first;
        if(!taken[u]) {
            min_cost += w, process(u, graph);
        }
    }
 
    return min_cost;
}
 
int main()
{
    ios::sync_with_stdio(false);
 
    int N;
 
    cin >> N;
 
    list<ii> graph[N+1]; // (Connection, Weight)
 
    for(int i = 1; i < N; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int dest, weight;
            cin >> dest >> weight;
            graph[i].push_back(ii(dest, weight));
            graph[dest].push_back(ii(i, weight));
        }
    }
 
    int tot_cost = 0, family = 0;
 
    taken.assign(N+1, 0);
 
    for(int i = 1; i <= N; i++) {
        if(!taken[i]) {
            tot_cost += prim(graph, i);
            family++;
        }
    }
 
    cout << family << ' ' << tot_cost << endl;
}
