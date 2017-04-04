#include <bits/stdc++.h>

using namespace std;

char matrix[25][35];
int  mine[25][35];

// ii(adjCov, adjSig)
pair<int,int> adj_info(int row, int col, int N, int M) 
{
	int x[] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int y[] = {0, 1, 1, 1, 0, -1 ,-1 ,-1};
	pair<int,int> info(0,0); 
	for(int i = 0; i < 8; i++) {
		int nrow = row + x[i], ncol = col + y[i];
		if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < M) {
			if(matrix[nrow][ncol] == '.') 
				info.first++;
			else if(matrix[nrow][ncol] == '*')
				info.second++;
		}
	}
	return info;
}

int adj_mines(int row, int col, int N, int M)
{
	int x[] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int y[] = {0, 1, 1, 1, 0, -1 ,-1 ,-1};
	int counter = 0;
	for(int i = 0; i < 8; i++) {
		int nrow = row + x[i], ncol = col + y[i];
		if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < M) {
			if(!isdigit(matrix[nrow][ncol]) && matrix[nrow][ncol] != '*') {
				matrix[nrow][ncol] = '*';
				counter++;
			}
		}
	}
	return counter;
}

int adj_tip_util(int row, int col, int N, int M)
{
	int x[] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int y[] = {0, 1, 1, 1, 0, -1 ,-1 ,-1};
	int counter = 0;
	for(int i = 0; i < 8; i++) {
		int nrow = row + x[i], ncol = col + y[i];
		if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < M) {
			if(mine[nrow][ncol]) 
				counter++;
		}
	}		
	return counter;
}


bool adj_tip(int row, int col, int N, int M)
{
	int x[] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int y[] = {0, 1, 1, 1, 0, -1 ,-1 ,-1};
	int flag = false;
	for(int i = 0; i < 8; i++) {
		int nrow = row + x[i], ncol = col + y[i];
		if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < M) {
			if(matrix[nrow][ncol] == '.')  {
				matrix[nrow][ncol] = (char)(adj_tip_util(nrow, ncol, N, M) + '0');
				flag = true;
			}
		}
	}		
	return flag;
}

bool resolvable(int N, int M, int K)
{
	bool flag = true; 
	int counter = 0;
	while(flag && counter != K) {
		flag = false;
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				pair<int,int> info = adj_info(i, j, N, M);
				if(info.first + info.second == matrix[i][j] - '0') { 
					int value = adj_mines(i, j, N, M);
					counter += value;
					if(value > 0) flag = true;				
				}
				else if(info.second == matrix[i][j] - '0') {
					flag = adj_tip(i, j, N, M);
				}
			}
		}
		printf("counter %d\n", counter);
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) 
				printf("%c", matrix[i][j]);
			puts("");
		}
		getchar(); getchar();
	}
	return counter == K;
}

int main()
{
	int N, M, K;
	
	while(scanf("%d%d%d", &N, &M, &K) && N != 0)
	{	
		for(int i = 0; i < N; i++)
			for(int j = 0; j < M; j++) 
				scanf(" %c", &matrix[i][j]);
		
		memset(mine, 0, sizeof mine);
		
		int row, col;
		
		for(int i = 0; i < K; i++) {
			scanf("%d%d", &row, &col);
			mine[--row][--col] = 1;
		}

		printf("%s\n", resolvable(N, M, K) ? "Possivel" : "Impossivel");
	}
}
