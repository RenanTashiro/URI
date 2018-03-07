/*
Nome:      Pulando Pedras
ID:        1703
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   296 Bytes
Submissao: 23/01/18 09:03:51
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int n, k;
		
		cin >> n >> k;
		
		int d = 0;
		
		for(int i = 1; i <= n; i++)
			if(k % i == 0) d++;
		
		cout << fixed << setprecision(12) << (double)d / n << endl;
	}
}
	