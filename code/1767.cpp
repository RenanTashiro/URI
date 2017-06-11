#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

tuple<int,int,int> KnapSack(int W, vector<ii> &sack, int SIZE)
{
	int K[SIZE+1][W+1], P[SIZE+1][W+1];
	for(int i = 0; i <= SIZE; i++) {
		for(int w = 0; w <= W; w++) {
			if(i == 0 || w == 0) {
				K[i][w] = 0;
				P[i][w] = 0;
			} 
			else if(sack[i-1].second <= w && sack[i-1].first + K[i-1][w-sack[i-1].second] > K[i-1][w]) {
				K[i][w] = sack[i-1].first + K[i-1][w-sack[i-1].second];
				P[i][w] = sack[i-1].second + P[i-1][w-sack[i-1].second];
			}
			else {
				K[i][w] = K[i-1][w];
				P[i][w] = P[i-1][w];
			}
		}
	}
	int i = SIZE, k = W, counter = 0;
	while(i > 0) {
		if(K[i][k] > K[i-1][k]) {
			k -= sack[i-1].second;
			counter++;
		}
		i--;
	}
	return make_tuple(K[SIZE][W],P[SIZE][W],counter);
}

int main()
{
	ios::sync_with_stdio(false);

	int N;
	
	cin >> N;
	
	for(int n = 0; n < N; n++)
	{
		int Pac;
		
		cin >> Pac;
		
		vector<ii> sack(Pac); // (Qtd,Weight)
		
		for(int i = 0; i < Pac; i++) {
			cin >> sack[i].first >> sack[i].second;			
		}
		
		auto ans = KnapSack(50, sack, Pac);
	
		cout << get<0>(ans) << " brinquedos\n";
		cout << "Peso: " << get<1>(ans) << " kg\n";
		cout << "sobra(m) " << Pac-get<2>(ans) << " pacote(s)\n\n";
	}
}
