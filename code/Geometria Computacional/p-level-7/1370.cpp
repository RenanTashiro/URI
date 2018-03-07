/*
Nome:      Regata de Cientistas
ID:        1370
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.200s
Tamanho:   3,39 KB
Submissao: 15/05/17 22:52:01
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<double, int> di;

struct Seg {
    int x1, x2, y1, y2;

    Seg(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }
};

double dist2point(int x1, int y1, int x2, int y2)
{
    return hypot((double)x1-x2, (double)y1-y2);
}

int orientation(ii p, ii q, ii r)
{
    int val = (q.second - p.second) * (r.first - q.first) -
              (q.first - p.first) * (r.second - q.second);

    if (val == 0) return 0;

    return (val > 0) ? 1: 2;
}

bool doIntersect(ii p1, ii q1, ii p2, ii q2)
{
    if(p1 == p2|| p1 == q2 || q1 == p2 || q1 == q2)
    {
        return false;
    }
    
    if (orientation(p1, q1, p2) != orientation(p1, q1, q2) && orientation(p2, q2, p1) != orientation(p2, q2, q1))
        return true;

    return false;
}

vector<vector<pair<int,double> > > construct_graph(vector<ii> pts, vector<Seg> seg, int xi, int yi, int xf, int yf)
{
    vector<vector<pair<int, double> > > graph(pts.size());

    for(int i = 0; i < (int)pts.size(); i++) // pts
    {
        for(int j = i + 1; j < (int)pts.size(); j++) // pts
        {
            bool flag = true;

            for(int k = 0; k < (int)seg.size(); k++) // seg
            {
                if(doIntersect(pts[i], pts[j], ii(seg[k].x1, seg[k].y1), ii(seg[k].x2, seg[k].y2))) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                double dist = dist2point(pts[i].first, pts[i].second, pts[j].first, pts[j].second);
                graph[i].push_back(pair<int, double>(j, dist));
                graph[j].push_back(pair<int, double>(i, dist));
            }
        }
    }

    return graph;
}

double dijkstra(vector<vector<pair<int, double> > > graph) // corrigir
{
    priority_queue<di, vector<di>, greater<di> > Q;
    vector<double> cost(graph.size(), DBL_MAX);

    Q.push(di(0.0, 0));
    cost[0] = 0.0;

    while(!Q.empty())
    {
        di u = Q.top(); Q.pop();

        if(u.second == (int)graph.size() - 1)
        {
            return cost[graph.size() - 1];
        }

        for(int v = 0; v < (int)graph[u.second].size(); v++)
        {
            if(graph[u.second][v].second + cost[u.second] < cost[graph[u.second][v].first])
            {
                cost[graph[u.second][v].first] = graph[u.second][v].second + cost[u.second];
                Q.push(di(cost[graph[u.second][v].first], graph[u.second][v].first));
            }
        }
    }

    return cost[graph.size() - 1];
}

int main()
{
    int xi, yi, xf, yf, n;

    while(cin >> xi >> yi >> xf >> yf >> n)
    {
        if(xi == 0 && yi == 0 && xf == 0 && yf == 0 && n == 0) break;

        vector<Seg> seg;
        vector<ii> pts;

        for(int i = 0; i < n; i++)
        {
            int x1, x2, y1, y2;

            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

            seg.push_back(Seg(x1, y1, x2, y2));
            pts.push_back(ii(x1, y1));
            pts.push_back(ii(x2, y2));
        }

        pts.insert(pts.begin(), ii(xi, yi));
        pts.push_back(ii(xf, yf));

        vector<vector<pair<int, double > > > graph = construct_graph(pts, seg, xi, yi, xf, yf);

        cout << fixed << setprecision(2) << dijkstra(graph) << endl;
    }
}


