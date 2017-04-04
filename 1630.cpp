#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b); }

// Not necessary for the original problem. Only a test
int **matrix_alloc(int N, int M) 
{
	int **matrix = (int**) malloc(N * sizeof(int*)); 
	{
		int tmp_matrix[N][M];
		
		for(int i = 0; i < N; i++) {
			matrix[i] = tmp_matrix[i];
		}
	}
	return matrix;
}

int main()
{
	int X, Y;
	
	int **matrix = matrix_alloc(5, 5);
	
	for(int i = 0; i < 5; i++) 
		for(int j = 0; j < 5; j++) 
			printf("%p\n", &matrix[i][j]);
	
	while(scanf("%d%d", &X, &Y) != EOF)
	{
		int commum = gcd(X, Y);
		printf("%d\n", 2 * (X / commum + Y / commum));
	}
}
