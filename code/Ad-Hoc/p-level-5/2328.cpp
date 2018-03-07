/*
Nome:      Chocolate
ID:        2328
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   242 Bytes
Submissao: 11/06/17 10:36:39
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int ans = 0;
	
	for(int i = 0; i < N; i++)
	{
		int div_fac;
		
		cin >> div_fac;
		
		ans += div_fac - 1;
	}
	
	cout << ans << endl;
}
