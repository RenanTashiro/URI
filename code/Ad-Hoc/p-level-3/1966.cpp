/*
Nome:      A Volta para Casa
ID:        1966
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   849 Bytes
Submissao: 15/01/18 13:21:37
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	double M;
	
	scanf("%d%lf", &N, &M);
	
	vector<int> cheese(N), prices(N);
	vector<pair<double, int>> cb(N);
	
	for(int i = 0; i < N; i++)
		scanf("%d", &cheese[i]);
		
	for(int i = 0; i < N; i++)
		scanf("%d", &prices[i]);
		
	for(int i = 0; i < N; i++) 
		cb[i] = {(double)cheese[i] / prices[i], i};
		
	sort(cb.rbegin(), cb.rend());
	double value = 0.0;
	int index = 0;
	
	while(M && index < N) {
		pair<double, int> c = cb[index];
		
		int volume = cheese[c.second];
		int price = prices[c.second];
		
		if(price <= M) {
			value += volume;
			M -= price;
		} else {
			
			double porc =  M / price;
			
			value += volume * porc;
			M = 0.0;
		}
		
		index++;
	}
	
	printf("%d\n", (int)floor((-1 + sqrt(1 + 8 * value)) / 2));
}
