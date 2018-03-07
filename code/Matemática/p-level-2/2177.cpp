/*
Nome:      Rio 2016
ID:        2177
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.564s
Tamanho:   477 Bytes
Submissao: 22/08/16 22:05:27
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, n;
	
	scanf("%d%d%d", &x, &y, &n);
	
	vector<int> yes;
	
	for(int i = 0; i < n; i++)
	{
		int xi, yi, ti;
		
		scanf("%d%d%d", &xi, &yi, &ti);
		
		if(hypot((double)xi-x,(double)yi-y) < (double)ti)
			yes.push_back(i+1);
	}
	
	if(yes.empty()) {
		puts("-1");
	} else {
		printf("%d", yes[0]);
		for(int i = 1; i < yes.size(); i++)
			printf(" %d", yes[i]);
		puts("");
	}
}
