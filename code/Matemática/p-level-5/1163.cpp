/*
Nome:      Angry Ducks
ID:        1163
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   719 Bytes
Submissao: 11/01/18 09:51:47
*/
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159

int main()
{
	double h;
	
	while(cin >> h)
	{
		int p1, p2, n;
		
		scanf("%d%d%d", &p1, &p2, &n);
		
		while(n--)
		{
			double angle, speed;
			
			scanf("%lf%lf", &angle, &speed);
			
			double a = -9.80665 / 2.0;
			double b = speed * sin(angle*PI/180.0);
			double c = h;								
			double delta = b*b - 4*a*c;
			double sq = sqrt(delta);				
			double r1 = (-b + sq) / (2.0*a);
			double r2 = (-b - sq) / (2.0*a);
			double r = max(r1, r2);
			double d = speed * cos(angle*PI/180.0) * r;
			
			printf("%.5lf -> ", d);
				
			if(p1 <= d && d <= p2)
				puts("DUCK");
			else
				puts("NUCK");			
		}
	}
}
