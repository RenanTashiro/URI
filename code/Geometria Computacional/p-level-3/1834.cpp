/*
Nome:      Vogons!
ID:        1834
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,93 KB
Submissao: 05/01/18 09:57:27
*/
#include <bits/stdc++.h>
using namespace std;

#define X first.first
#define Y first.second
#define H second


typedef pair<int,int> ii;
typedef pair<ii, int> iii;

// :x1 sempre eh menor igual que :x2
//     -1 = weast
//      0 = middle
//      1 = east
int which_sector(int x, int y, int a, int b)
{
	double value = a*x + b;
	
	if(value == y)
		return 0;
			
	return value > y ? -1 : 1;
}

int main()
{
	int x1, y1, x2, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;

	if(x1 > x2 && y1 != y2) {
		swap(x1, x2);
		swap(y1, y2);
	}
	
	// line equation
	double a = -1.0, b = -1.0;
	
	if(x1 != x2 && y1 != y2) {
		a = (y2 - y1) / ((double)x2 - x1);
		b = y2 - a*x2;
	}
	
	int N, w_planet = 0, w_people = 0, e_planet = 0, e_people = 0;
	int planet = 0;
	
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int x, y, h, q;
		
		scanf("%d%d%d", &x, &y, &h);	
		
		if(x1 != x2 && y1 != y2)
			q = which_sector(x, y, a, b);
		else if(x1 == x2) {
			if(y1 > y2) {
				if(x < x1)
					q = -1;
				else if(x == x1)
					q = 0;
				else
					q = 1;
			} else {
				if(x > x1)
					q = -1;
				else if(x == x1)
					q = 0;
				else
					q = 1;
			}	
		} else if(y1 == y2) {
			if(x1 > x2) {
				if(y > y1)
					q = -1;
				else if(y == y1)
					q = 0;
				else 
					q = 1;
			} else {
				if(y < y1)
					q = -1;
				else if(y == y1)
					q = 0;
				else 
					q = 1;
			}
		}

		if(q == -1) {
			w_planet++;
			w_people += h;
		} else if(q == 0) {
			planet++;
		} else {
			e_planet++;
			e_people += h;	
		}		
	}
		
	puts("Relatorio Vogon #35987-2");
	printf("Distancia entre referencias: %.2lf anos-luz\n", hypot((double)x1-x2, (double)y1-y2));	
	printf("Setor Oeste:\n- %d planeta(s)\n- %d bilhao(oes) de habitante(s)\n", e_planet, e_people);
	printf("Setor Leste:\n- %d planeta(s)\n- %d bilhao(oes) de habitante(s)\n", w_planet, w_people);
	printf("Casualidades: %d planeta(s)\n", planet);
}