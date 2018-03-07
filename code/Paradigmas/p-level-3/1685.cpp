/*
Nome:      Praça de Daniel
ID:        1685
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.844s
Tamanho:   1,72 KB
Submissao: 10/01/18 10:52:48
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, M;

        scanf("%d%d", &N, &M);

		vector<vector<int>> down(N, vector<int>(M, 0));
		vector<vector<int>> right(N, vector<int>(M, 0));
		vector<vector<int>> diag(N, vector<int>(M, 0));
        string field[N];

        for(int i = 0; i < N; i++)
            cin >> field[i];

        for(int i = N - 1; i >= 0; i--)
        {
            for(int j = M - 1; j >= 0; j--)
            {
                if(i == N - 1)
                    down[i][j] = field[i][j] == '.' ? 1 : 0;
                if(j == M - 1)
                    right[i][j] = field[i][j] == '.' ? 1 : 0;
                if(i != N - 1) 
                    down[i][j] = field[i][j] == '.' ? 1 + down[i+1][j] : 0;
                if(j != M - 1)
					right[i][j] = field[i][j] == '.' ? 1 + right[i][j+1] : 0;
					
				
				if(i != N-1 && j != M-1)
					diag[i][j] = (field[i][j] == '.' ? 1 + min(down[i+1][j], min(right[i][j+1], diag[i+1][j+1])) : 0);
				else
					diag[i][j] = field[i][j] == '.' ? 1 : 0;
            }
        }
        
        int max_side = 0, n_locations = 0;

        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                max_side = max(max_side, min(down[i][j], min(right[i][j], diag[i][j])));

        printf("The side of the square is %d and the locations are:\n", max_side);

        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                if(max_side == min(down[i][j], min(right[i][j], diag[i][j])))
                    printf("%d %d\n", i + 1, j + 1), n_locations++;

        printf("%d in total.\n", n_locations);
    }
}