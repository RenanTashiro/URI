/*
Nome:      2048
ID:        1559
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   1,69 KB
Submissao: 09/06/17 17:14:53
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		int state[4][4];
		bool already_solved = false;
		
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				scanf("%d", &state[i][j]);
				
				if(state[i][j] == 2048) already_solved = true;
			}
		}
		
		if(already_solved) 
		{
			puts("NONE");
			continue;
		}
		
		bool down = false, left = false, right = false, up = false;
		
		// down
		for(int i = 0; i < 3 && !down; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				if(state[i][j] != 0 && (state[i][j] == state[i+1][j] || state[i+1][j] == 0))
				{
					down = true;
					break;
				}
			}
		}
		
		// left
		for(int j = 3; j > 0 && !left; j--)
		{
			for(int i = 0; i < 4; i++)
			{
				if(state[i][j] != 0 && (state[i][j] == state[i][j-1] || state[i][j-1] == 0)) 
				{
					left = true;
					break;
				}				
			}
		}
		
		// right
		for(int j = 0; j < 3 && !right; j++)
		{
			for(int i = 0; i < 4; i++)
			{
				if(state[i][j] != 0 && (state[i][j] == state[i][j+1] || state[i][j+1] == 0))
				{
					right = true;
					break;
				}				
			}
		}		
		
		// up
		for(int i = 3; i > 0 && !up; i--)
		{
			for(int j = 0; j < 4; j++)
			{
				if(state[i][j] != 0 && (state[i][j] == state[i-1][j] || state[i-1][j] == 0)) 
				{
					up = true;
					break;
				}
			}
		}
		
		if(down || left || right || up)
		{
			if(down) printf("DOWN");
			if(left) printf("%sLEFT", down ? " " : "");
			if(right) printf("%sRIGHT", down || left ? " " : "");
			if(up) printf("%sUP", down || left || right ? " " : "");
			puts("");
		}
		else
		{
			puts("NONE");
		}
	}
}
