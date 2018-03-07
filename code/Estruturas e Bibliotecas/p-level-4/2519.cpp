/*
Nome:      Estratégia Campeã
ID:        2519
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.324s
Tamanho:   1,22 KB
Submissao: 07/01/18 18:09:44
*/
#include <bits/stdc++.h>
using namespace std;

int tree[1005][1005];
int max_x, max_y;

// [1, MAX]
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
	while(scanf("%d%d", &max_x, &max_y) != EOF)
	{
		for(int i = 0; i <= max_x; i++)
			for(int j = 1; j <= max_y; j++)
				tree[i][j] = 0;
							
		int v;
		
		for(int i = 1; i <= max_x; i++) {
			for(int j = 1; j <= max_y; j++) {
				scanf("%d", &v);
				
				if(v == 1)				
					update(i, j, 1);
			}
		}
				
		int Q;
		
		scanf("%d", &Q);
		
		while(Q--)
		{
			int R, I1, J1, I2, J2;
			
			scanf("%d%d%d%d%d", &R, &I1, &J1, &I2, &J2);
			
			if(R == 0) {
				update(I1, J1, -1);
				update(I2, J2, 1);
			} else {
				printf("%d\n", read(I2, J2) - read(I2, J1-1) - read(I1-1, J2) + read(I1-1, J1-1));
			}
		}
	}
}
