#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, L = 0, P = 0;
	
	scanf("%d", &N);
	
	int winner[N]; // 0- Lucas 1- Pedro
	
	for(int n = 0; n < N; n++)
	{
		int base, exp, fat;
		
		scanf("%d^%d%d!", &base, &exp, &fat);				
		
		double Lucas = log(base) * exp, Pedro = 0.0;	
		
		for(int i = 1; i <= fat; i++) {
			Pedro += log(i);
		}
		
		if(Lucas > Pedro) {
			L++;
		} else { 
			P++;
		}
		
		winner[n] = Lucas > Pedro ? 0 : 1;		
	}
	
	if(L > P)		 puts("Campeao: Lucas!");
	else if(L < P) 	 puts("Campeao: Pedro!");
	else 			 puts("A competicao terminou empatada!");
	
	for(int i = 1; i <= N; i++) {
		printf("Rodada #%d: %s foi o vencedor\n", i, (winner[i-1] == 0 ? "Lucas" : "Pedro"));
	}
}
