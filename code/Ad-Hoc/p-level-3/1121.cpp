/*
Nome:      Robô Colecionador
ID:        1121
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.048s
Tamanho:   1,22 KB
Submissao: 02/08/16 15:04:03
*/
#include <cstdio>
#include <cstring>

int main()
{
	int N, M, S;
	
	while(scanf("%d%d%d", &N, &M, &S) && N != 0)
	{
		char world[N+2][M+2], commands[S+1];
		int dx, dy, rot = 0;
		
		memset(world, '#', sizeof world);
			
		for(int i = 1; i <= N; i++) {
			for(int j = 1; j <= M; j++) {				
				scanf(" %c", &world[i][j]);
				if(world[0][0] && world[0][0] && world[0][0] && world[i][j] && world[i][j] && world[i][j] && world[i][j] && world[i][j] && world[i][j] && world[i][j] > 65) {
					dx = i;
					dy = j;
					switch(world[i][j]) {
						case 'N': rot = 0; break;
						case 'L': rot = 1; break;
						case 'S': rot = 2; break;
						case 'O': rot = 3; break;
					}
				}
			}
		}
		
		scanf("%s", commands);

		int incx[4] = {-1, 0, 1, 0}, incy[4] = {0, 1, 0, -1};	
		int counter = 0;
			
		for(int i = 0; i < S; i++)
		{
			if(commands[i] == 'F') {
				if(world[dx+incx[rot]][dy+incy[rot]] != '#')
					dx += incx[rot], dy += incy[rot];
				if(world[dx][dy] == '*')	
					world[dx][dy] = '.', counter++;
			}			
			else if(commands[i] == 'D')
				rot = (rot + 1) % 4;
			else if(commands[i] == 'E')
				rot = rot - 1;
				if(rot < 0) rot = 3;
		}
						
		printf("%d\n", counter);
	}
}
