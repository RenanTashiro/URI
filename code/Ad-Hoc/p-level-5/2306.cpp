/*
Nome:      Escada Perfeita
ID:        2306
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   489 Bytes
Submissao: 14/10/16 15:13:51
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int stacks[N], mini = INT_MAX, acc = 0, c_acc = 0;
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &stacks[i]);
		mini = min(mini, stacks[i]);
		acc += i;
	}

	int ans = 0;

	for(int i = 0; i < N; i++)
	{
		c_acc += stacks[i] - mini;
		if(stacks[i] - mini > i)
			ans += stacks[i] - mini - i;
	}
	
	if(acc != c_acc)
		printf("%d\n", -1);
	else
		printf("%d\n", ans);
}