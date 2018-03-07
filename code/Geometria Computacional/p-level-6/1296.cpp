/*
Nome:      Medianas
ID:        1296
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   437 Bytes
Submissao: 04/01/18 09:46:28
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;
	
	while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		// https://math.stackexchange.com/questions/396085/how-to-find-area-of-triangle-from-its-medians
		double s = (a + b + c) / 2.0;
		double d = s*(s - a)*(s - b)*(s - c);
				
		if(d > 0)
			printf("%.3lf\n", (4.0/3.0) * sqrt(s*(s - a)*(s - b)*(s - c)));
		else
			printf("-1.000\n");
	}
}
