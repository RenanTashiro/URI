/*
Nome:      Companheiros de Exército
ID:        1311
Resposta:  Accepted
Linguagem: C++
Tempo:     0.216s
Tamanho:   752 Bytes
Submissao: 08/01/16 19:58:13
*/
#include <bits/stdc++.h>

#define right second
#define left first

using namespace std;

typedef pair<int,int> ii; // (left, right)

int main()
{
	int S, B;
	
	while(scanf("%d%d", &S, &B) && S != 0)
	{
		vector<ii> soldier(S+2);
		int L, R;
	
		for(int i = 1; i <= S; i++) {
			soldier[i] = ii(i-1,i+1);
		}
	
		for(int i = 0; i < B; i++) {
			scanf("%d%d", &L, &R);
			soldier[soldier[L].left].right = soldier[R].right;
			soldier[soldier[R].right].left = soldier[L].left;
			if(soldier[L].left == 0) {
				printf("*");
			} else {
				printf("%d", soldier[L].left);
			}
			if(soldier[R].right == S+1) {
				printf(" *\n");
			}
			else {
				printf(" %d\n", soldier[R].right);
			}
		}
		
		puts("-");
	}
}
