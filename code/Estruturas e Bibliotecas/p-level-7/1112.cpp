/*
Nome:      Schweisen
ID:        1112
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.392s
Tamanho:   1,44 KB
Submissao: 09/01/18 10:43:14
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int tree[MAX][MAX];
int max_x, max_y;

void update(int x , int y , int val){
    int y1;
    while (x <= max_x){
        y1 = y;
        while (y1 <= max_y){
            tree[x][y1] += val;
            y1 += (y1 & -y1);
        }
        x += (x & -x);
    }
}

int read(int x, int y){
    int sum = 0, y1;
    while(x > 0){
        y1 = y;
        while(y1 > 0) {
            sum += tree[x][y1];
            y1 -= (y1 & -y1);
        }
        x -= (x & -x);
    }
    return sum;
}

int main()
{
    int N, M, P;

    while(scanf("%d%d%d", &N, &M, &P))
    {
		if(N == 0 && M == 0 && P == 0)
			break;
			
        for(int i = 0; i < MAX; i++)
            for(int j = 0; j < MAX; j++)
                tree[i][j] = 0;

        max_x = N;
        max_y = M;

        int Q;

		scanf("%d", &Q);
		
        while(Q--)
        {
			string c;
			
			cin >> c;
            
            if(c == "A") {
				int n, x, y;
				
				scanf("%d%d%d", &n, &x, &y);
				 
				update(x+1, y+1, n);
			} else {
				int i1, j1, i2, j2;
				
				scanf("%d%d%d%d", &i1, &j1, &i2, &j2);
				
				i1++, i2++, j1++, j2++;
				
				if(i1 > i2)
					swap(i1, i2);
				if(j1 > j2)
					swap(j1, j2);
				
				printf("%d\n", P * (read(i2, j2) - read(i2, j1-1) - read(i1-1, j2) + read(i1-1, j1-1)));
			}
        }
        
        puts("");
    }
}
