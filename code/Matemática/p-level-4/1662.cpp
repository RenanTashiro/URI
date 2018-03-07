/*
Nome:      Quadrados Homogêneos
ID:        1662
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.492s
Tamanho:   506 Bytes
Submissao: 15/01/16 20:32:36
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n) == 1 && n) {
		int s[n][n];
		for (int i=0; i<n; ++i)
			for (int j=0; j<n; ++j) {
				scanf("%d",&s[i][j]);
				if (i > 0)
					s[i][j] -= s[0][j];
			}
		bool homogeneous = true;
		for (int i=1; homogeneous && i<n; ++i)
			for (int j=1; j<n; ++j)
				if (s[i][j] != s[i][0]) {
					homogeneous = false;
					break;
				}
		if (!homogeneous)
			printf("not ");
		puts("homogeneous");
	}
}