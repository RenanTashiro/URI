/*
Nome:      Banho de Sol no Jardim
ID:        2110
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.136s
Tamanho:   956 Bytes
Submissao: 26/02/18 11:32:07
*/
#include <bits/stdc++.h>
using namespace std;

double angle_dmax(int h[], int l, int d, int i, int j)
{
	double a = 0.0, dist = l + d;
	
	for(int k = i; k < j; k++) {
		a = max(a, atan2((double)h[k], dist));
		dist += l + d;
	}
	
	return a;
}

double angle_lmax(int h[], int l, int d, int i, int j)
{
	double a = 0.0, dist = (j-i)*(l+d);
	
	for(int k = i; k < j; k++) {
		a = max(a, atan2((double)h[k], dist));
		dist -= (l + d);
	}
	
	return a;
}



int main()
{
	int n, l, d;
	
	while(scanf("%d%d%d", &n, &l, &d) != EOF)
	{
		int h[n];
		
		for(int i = 0; i < n; i++)
			scanf("%d", &h[i]);
			
		double r = 0.0;
			
		for(int i = 0; i < n; i++)
		{
			if(h[i] == 0)
			{
				r += angle_lmax(h, l, d, 0, i);
				r += angle_dmax(h, l, d, i+1, n);
				break;
			}
		}
		
		double angle = r * 180 / M_PI;
		double sun_coverage = 1.0 - angle / 180.0;

		printf("%.2lf\n", sun_coverage * 960);
	}
}

