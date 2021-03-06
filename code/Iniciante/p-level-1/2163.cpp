/*
Nome:      O Despertar da Força
ID:        2163
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.308s
Tamanho:   583 Bytes
Submissao: 25/07/16 22:30:55
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;
	
	int matrix[n][m];
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> matrix[i][j];
			
	int X = 0, Y = 0;
	
	for(int i = 1; i < n-1; i++)
		for(int j = 1; j < m-1; j++)
			if(matrix[i][j] == 42 && matrix[i+1][j] == 7 && matrix[i+1][j+1] == 7 && matrix[i][j+1] == 7 && matrix[i-1][j+1] == 7 && matrix[i-1][j] == 7 && matrix[i-1][j-1] == 7&& matrix[i][j-1] == 7 && matrix[i+1][j-1] == 7)
				X = i+1, Y = j+1; 
			
	cout << X << ' ' << Y << endl;
}
