/*
Nome:      Consecutivos
ID:        2415
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   398 Bytes
Submissao: 10/06/17 19:39:37
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int ans = 1, count = 1, act_value = 0;
	
	cin >> act_value;
	
	for(int i = 1; i < N; i++)
	{
		int value;
		
		cin >> value;
		
		if(act_value == value)
			count++;
		else
		{
			ans = max(ans, count);
			act_value = value;
			count = 1;
		}
	}
	
	cout << max(ans, count) << endl;
}
