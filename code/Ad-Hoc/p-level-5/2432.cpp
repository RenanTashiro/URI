/*
Nome:      Tiro ao Alvo
ID:        2432
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.040s
Tamanho:   573 Bytes
Submissao: 19/02/18 11:27:35
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int c, t;
	
	scanf("%d%d", &c, &t);
	
	vector<int> radius(c);
	
	for(int i = 0; i < c; i++)
		scanf("%d", &radius[i]);
	
	long long pts = 0;
	int x, y;
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d%d", &x, &y);
		
		double dist = hypot(x, y);
		
		pts += c - (lower_bound(radius.begin(), radius.end(), ceil(dist)) - radius.begin());
		
		//~ cout << dist << ' ' << c - (lower_bound(radius.begin(), radius.end(), floor(dist)) - radius.begin()) << endl;
	}
	
	printf("%lld\n", pts);
}
