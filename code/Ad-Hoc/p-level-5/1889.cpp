/*
Nome:      Treinando com as Larvas de Phuket
ID:        1889
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.880s
Tamanho:   950 Bytes
Submissao: 24/02/18 09:39:09
*/
#include <bits/stdc++.h>
using namespace std;

inline bool valid(double a, double b, double c)
{
	return a < b + c && b < a + c && c < a + b;
}

inline double area(double a, double b, double c)
{
	double p = (a + b + c) / 2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while(t--)
	{
		int n;
		
		scanf("%d", &n);
		
		vector<double> len(n);
		
		for(int i = 0; i < n; i++)
			scanf("%lf", &len[i]);
		
		sort(len.begin(), len.end());
		
		double min_area = DBL_MAX;
		
		for(int b = 1; b < n-1; b++)
		{
			for(int c = b+1; c < n; c++)
			{
				auto it = lower_bound(len.begin(), len.begin()+(b-1), len[c]-len[b]);
				
				if(it != len.end())
				{
					int a = it - len.begin();
					
					min_area = min(min_area, area(len[a], len[b], len[c]));
				}
			}
		}
		
		if(min_area == DBL_MAX)
			puts("-1");
		else
			printf("%.2lf\n", min_area);
	}
}

