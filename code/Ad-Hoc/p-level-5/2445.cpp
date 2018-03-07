/*
Nome:      Polígono
ID:        2445
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   436 Bytes
Submissao: 19/02/18 12:17:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int sticks[n], sum = 0;
	
	for(int i = 0; i < n; i++)
		scanf("%d", &sticks[i]), sum += sticks[i];
		
	sort(sticks, sticks+n);
		
	int count = 0;
	
	for(int i = n-1; i >= 0; i--)
		if(sum - sticks[i] > sticks[i])
			count++;
		else
			sum -= sticks[i];

	if(count <= 2)
		puts("0");
	else
		printf("%d\n", count);
}
