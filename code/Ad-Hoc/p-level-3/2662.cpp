/*
Nome:      Escala Musical
ID:        2662
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   926 Bytes
Submissao: 14/09/17 14:55:59
*/
// autor: colega de time da maratona 
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
	int n, notas[100000], tom[]={0, 2, 4, 5, 7, 9, 11}, maior=0, nota;
	char nomes[][5]={"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &notas[i]), notas[i]%=12;
	for(int i=0; i<12 && !maior; i++)
	{
		for(int j=0; j<7; j++)
			tom[j]=(tom[j]+1)%12;
		nota=i;
		maior=1;
		for(int j=0; j<n && maior; j++)
		{
			maior=0;
			for(int k=0; k<7; k++)
				if(notas[j]==tom[k])
				{
					maior=1;
					break;
				}
		}
	}
	if(maior)
		printf("%s\n", nomes[nota]);
	else
		printf("desafinado\n");		
}

/*
8
1
3
5
6
8
10
12
13

10
8
11
21
16
11
8
27
57
27
21

7
2
2
4
3
12
12
3
*/
