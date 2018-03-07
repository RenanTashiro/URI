/*
Nome:      Sequencia Completa de Naebbirac
ID:        2697
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,1 KB
Submissao: 24/12/17 10:49:11
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int K, N;
	
	cin >> K >> N;
	
	int qtd[K+1];
	
	memset(qtd, 0, sizeof qtd);
	
	for(int i = 0; i < N; i++)
	{
		int s;
		
		scanf("%d", &s);
		
		qtd[s]++;		
	}
	
	int max_value = INT_MIN, min_value = INT_MAX;
	int qtd_max = 0, qtd_min = 0;
	int who_max = -1, who_min = -1;
	
	for(int i = 1; i <= K; i++)
	{
		if(qtd[i] > max_value) {
			max_value = qtd[i];
			qtd_max = 1;
			who_max = i;
		} else if(qtd[i] == max_value) {
			qtd_max++;
		}
		
		if(qtd[i] < min_value) {
			min_value = qtd[i];
			qtd_min = 1;
			who_min = i;
		} else if(qtd[i] == min_value) {
			qtd_min++;
		}
	}
	
	//~ printf("%d %d %d %d %d %d\n", max_value, min_value, qtd_max, qtd_min, who_max, who_min);
	
	if(qtd_min == 1 and qtd_max == K-1 && max_value - min_value == 1)
		printf("+%d\n", who_min);
	else if(qtd_max == 1 and qtd_min == K-1 && max_value - min_value == 1)
		printf("-%d\n", who_max);
	else if(qtd_min == 1 and qtd_max == 1 && abs(max_value - min_value) == 2)
		printf("-%d +%d\n", who_max, who_min);
	else
		puts("*");
}
