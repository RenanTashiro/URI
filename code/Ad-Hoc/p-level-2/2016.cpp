/*
Nome:      D como em Daedalus
ID:        2016
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   553 Bytes
Submissao: 26/12/15 11:52:44
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, max_profit = 0;	
	cin >> N >> M;	
	for(int i = 0; i < M; i++) {
		int B, D, sum = 0;
		cin >> B >> D;
		for(int j = 1; j < N; j++) {
			int C;
			cin >> C;
			sum += C; 
		}
		int profit = 1;
		while(profit*10 <= 10000 && sum + profit*10 <= B) {
			profit *= 10;
		}
		if(sum + D < B && profit + sum <= B) {
			max_profit += profit - D;
		}		
		else if(sum + D > B && profit + sum <= B) {
			max_profit += profit;
		}
	}
	cout << max_profit << endl;
}
