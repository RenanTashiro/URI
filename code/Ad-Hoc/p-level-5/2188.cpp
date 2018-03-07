/*
Nome:      Macaco-prego
ID:        2188
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   1.004 Bytes
Submissao: 15/02/18 15:04:35
*/
#include <bits/stdc++.h>
using namespace std;

struct rect {
	int right, left, top, bottom;
	rect(int r, int l, int t, int b) : right(r), left(l), top(t), bottom(b) {}
	rect() {}
};

rect intersection(rect a, rect b)
{
	int right = min(a.right, b.right);
	int left = max(a.left, b.left);
	int top = min(a.top, b.top);
	int bottom = max(a.bottom, b.bottom);
	return rect(right, left, top, bottom);
}

int main()
{
	int n, t = 1;
	
	while(scanf("%d", &n) && n != 0)
	{		
		int left, top, right, bottom;		
		rect area;
		
		scanf("%d%d%d%d", &area.left, &area.top, &area.right, &area.bottom);
		
		for(int i = 1; i < n; i++)
		{
			scanf("%d%d%d%d", &left, &top, &right, &bottom);
			
			area = intersection(area, rect(right, left, top, bottom));
		}
		
		printf("Teste %d\n", t++);
		
		if(area.left < area.right && area.bottom < area.top)
			printf("%d %d %d %d\n", area.left, area.top, area.right, area.bottom);
		else
			puts("nenhum");
		
		puts("");
	}
}
