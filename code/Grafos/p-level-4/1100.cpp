/*
Nome:      Movimentos do Cavalo
ID:        1100
Resposta:  Accepted
Linguagem: C++
Tempo:     0.056s
Tamanho:   1,04 KB
Submissao: 19/05/16 21:38:57
*/
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int,int> ii;

int x[] = {2, 2, 1, -1, -2, -2, -1, 1}, y[] = {-1, 1, 2, 2, 1, -1, -2, -2};

ii toCoord(string tag)
{
	return ii(tag[0]-'a', tag[1]-'1');
}

int bfs(ii start, ii end)
{
	queue<pair<ii,int>> Q;
	int memo[8][8] = {{0}};
	Q.push(pair<ii,int>(start,0));
	memo[start.first][start.second] = 1;
	while(!Q.empty()) {
		ii u = Q.front().first; 
		int counter = Q.front().second; 
		Q.pop();
		if(u.first == end.first && u.second == end.second) {
			return counter;
		}
		for(int i = 0; i < 8; i++) {
			ii v = ii(u.first+x[i], u.second+y[i]);
			if(v.first >= 0 && v.first < 8 && v.second >= 0 && v.second < 8) {
				if(!memo[v.first][v.second]) {
					Q.push(pair<ii,int>(v, counter+1));
				}
			}
		}
	}
	return 0;
}

int main()
{
	string a, b;
	
	while(cin >> a >> b)
	{
		ii u = toCoord(a), v = toCoord(b); 
		
		cout << "To get from " << a << " to " << b <<
				" takes " << bfs(u, v) << " knight moves.\n";
	}
}
