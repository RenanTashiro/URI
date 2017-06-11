#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int KnapSack(int W, vector<ii> &sack, int SIZE)
{
	int K[SIZE+1][W+1];
	for(int i = 0; i <= SIZE; i++) {
		for(int w = 0; w <= W; w++) {
			if(i == 0 || w == 0) {
				K[i][w] = 0;
			}
			else if(sack[i-1].second <= w) {
				K[i][w] = max(sack[i-1].first + K[i-1][w-sack[i-1].second], K[i-1][w]);
			}
			else {
				K[i][w] = K[i-1][w];
			}
		} 
	}
	return K[SIZE][W];
}

int main()
{
	ios::sync_with_stdio(false);
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N;
		
		cin >> N;
		
		vector<ii> sack(N);
		
		for(int i = 0; i < N; i++) {
			cin >> sack[i].first >> sack[i].second;
		}
		
		int W, hp;
		
		cin >> W >> hp;
		
		int ans = KnapSack(W, sack, N);
		
		cout << (hp <= ans ? "Missao completada com sucesso" : "Falha na missao") << endl;
	}
}
