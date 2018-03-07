/*
Nome:      Mercearia
ID:        1654
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.072s
Tamanho:   561 Bytes
Submissao: 18/08/17 19:07:59
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int a = 1; a <= 500; a++)
	{
		for(int b = a; b <= 2000 - a; b++)
		{
			for(int c = b; c <= 2000 - a - b; c++)
			{
				if(a + b + c > 2000)
					continue;
					
				int m = 1000000 * (a + b + c);
				int n = (a * b * c - 1000000);
				
				if(n <= 0 || m % n != 0)
					continue;
					
				int d = m / n;
				
				if(d < c || a + b + c + d > 2000)
					continue;
					
				printf("%.2f %.2f %.2f %.2f\n", a / 100.0, b / 100.0, c / 100.0, d / 100.0);
			}
		}
	}
}
