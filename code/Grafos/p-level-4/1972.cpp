/*
Nome:      Nêmesis
ID:        1972
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.256s
Tamanho:   1,8 KB
Submissao: 27/12/15 10:02:39
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

char lab[505][505];
int row[] = { -1, 0, 1, 0 }, col[] = { 0, 1, 0 , -1 };

int toInt(char c) {
    return isdigit(c) ? c - 48 : 0;
}

int dijkstra(ii he, ii eu, int N, int M)
{
    int min_dist[505][505], visited[505][505];
    for(int i = 0; i <= N; i++) {
		for(int j = 0; j <= M; j++) {
			min_dist[i][j] = INT_MAX;
			visited[i][j] = 0;
		}
	}
    min_dist[he.first][he.second] = 0;
    queue<ii> toVisit; toVisit.push(he);

    while(!toVisit.empty()) {
        ii act = toVisit.front(); toVisit.pop();
        visited[act.first][act.second] = 1;
        for(int i = 0; i < 4; i++) {
            ii actTo = {act.first+row[i], act.second+col[i]};
            if(/*!visited[actTo.first][actTo.second] && */lab[actTo.first][actTo.second] != '#') {
				if(min_dist[actTo.first][actTo.second] > min_dist[act.first][act.second] + toInt(lab[actTo.first][actTo.second])) {
					min_dist[actTo.first][actTo.second] = min_dist[act.first][act.second] + toInt(lab[actTo.first][actTo.second]);
					toVisit.push({actTo.first, actTo.second});
				}
			}
        }
    }
    return min_dist[eu.first][eu.second];
}

int main()
{
    int N, M;
    ii he, eu;

    cin >> N >> M;

    for(int i = 0; i <= N + 1; i++) {
        for(int j = 0; j <= M + 1; j++)
            lab[i][j] = '#';
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            cin >> lab[i][j];
            if(lab[i][j] == 'H')
                he = {i,j};
            if(lab[i][j] == 'E')
                eu = {i,j};
        }
    }

    int ans = dijkstra(he, eu, N, M);

    if(ans == INT_MAX)
        puts( "ARTSKJID" );
    else
        printf("%d\n", ans);

    return 0;
}
