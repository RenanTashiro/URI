/*
Nome:      Labirinto
ID:        1621
Resposta:  Accepted
Linguagem: C++
Tempo:     0.156s
Tamanho:   1,58 KB
Submissao: 23/12/15 14:03:22
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi>	vii;
typedef pair<int,int> ii;

struct Point {
	int first, second, level;
	Point(int f, int s, int l ) : first(f), second(s), level(l) {}
};

Point BFS(vii &graph, int r, int c, int N, int M) 
{
	int row[] = {-1, 0, 1, 0}, col[] = {0, 1, 0, -1};
	const int ADJ = 4;
	
	queue<Point> Q;
	int V[505][505] = {{0}};
	
	Q.push(Point(r,c,0));
	V[r][c] = 1;
	
	Point ans(0,0,0);
	
	while(!Q.empty())
	{
		Point act = Q.front(); Q.pop();
		ans = act;
		for(int i = 0; i < ADJ; i++) {
			Point dest = {act.first+row[i], act.second+col[i], act.level+1};
			if(dest.first < N && dest.first >= 0 && dest.second < M && dest.second >= 0) {
				if(!V[dest.first][dest.second] && graph[dest.first][dest.second] == '.') {
					Q.push(dest);
					V[dest.first][dest.second] = true;
				}
			}
		}
	}
	
	return ans;
}

int main()
{
	int N, M;
	
	while(cin >> N >> M && N != 0)
	{
		vii graph(N,vi(M));
		
		string str[N];
		
		for(int i = 0; i < N; i++) {
			cin >> str[i];
		}
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				graph[i][j] = (int) str[i][j];
			}   
		}
		
		ii init = {-1,-1};
		
		for(int i = 0; i < N && init.first == -1; i++) {
			for(int j = 0; j < M; j++) {
				if(graph[i][j] == '.') {
					init.first = i;
					init.second = j;
					break;
				}
			}
		}
		
		Point longest = BFS(graph, init.first, init.second, N, M);
		longest = BFS(graph, longest.first, longest.second, N, M);
		
		cout << longest.level << endl;
	}
}
