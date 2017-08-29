/*
Nome:      Matriz Escada
ID:        2450
Resposta:  Accepted
Linguagem: C++
Tempo:     0.032s
Tamanho:   750 Bytes
Submissao: 10/06/17 18:07:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	scanf("%d%d", &N, &M);
	
	int matrix[N][M];
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	vector<bool> zfrom_now(M, false);
	bool line_fzero = false, is_stair = true;
	
	for(int i = 0; i < N && is_stair; i++)
	{
		bool ndiffz = false;
		
		for(int j = 0; j < M; j++)
		{
			if((line_fzero || zfrom_now[j]) && matrix[i][j] != 0) 
			{
				is_stair = false;
				break;
			}
			if(matrix[i][j] != 0)
			{
				if(!ndiffz) 
					zfrom_now[j] = true;
				ndiffz = true;
			}
		}
		
		if(!ndiffz)
		{
			line_fzero = true;
		}
	}
	
	printf("%s\n", is_stair ? "S" : "N");
}
