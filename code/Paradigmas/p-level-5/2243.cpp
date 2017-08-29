/*
Nome:      Isósceles
ID:        2243
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   722 Bytes
Submissao: 13/09/16 15:13:32
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int h[N], r[N], l[N];
	
	for(int i = 0; i < N; i++)
		scanf("%d", &h[i]);
		
	r[0] = 1;	
		
	for(int i = 1; i < N; i++)
	{
		if(h[i-1] < h[i] || r[i-1] + 1 <= h[i])
			r[i] = r[i-1] + 1;
		else if(r[i-1] >= h[i])
			r[i] = h[i];
		else if(r[i-1] < h[i])
			r[i] = r[i-1];
	}
	
	l[N-1] = 1;
	
	for(int i = N-2; i >= 0; i--)
	{
		if(h[i] > h[i+1] || l[i+1] + 1 <= h[i])
			l[i] = l[i+1] + 1;
		else if(l[i+1] >= h[i])
			l[i] = h[i];
		else if(l[i+1] < h[i])
			l[i] = l[i+1];
	}
	
	int ans = 0;
	
	for(int i = 0; i < N; i++)
		ans = max(ans, min(r[i], l[i]));
		
	printf("%d\n", ans);
}
