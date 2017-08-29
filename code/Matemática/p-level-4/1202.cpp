/*
Nome:      Festival das Noites Brancas
ID:        1202
Resposta:  Accepted
Linguagem: C++
Tempo:     0.136s
Tamanho:   647 Bytes
Submissao: 10/06/17 09:43:10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while(T--)
	{
		string pos;
		
		cin >> pos;
		
		int ans = 0;
		
		for(int i = 0; pos[i] != '\0'; i++)
		{
			ans *= 2;
			ans += (pos[i] - '0');
			ans %= 1500;
		}
		
		if(ans == 0)
		{
			cout << "000\n";
		}
		else
		{	
			long long fib[2] = {0, 1};
			
			for(int i = 2; i <= ans; i++)
			{
				long long tmp = fib[1];
				fib[1] = (fib[1] + fib[0]) % 1000;
				fib[0] = tmp;
			}
			
			for(int i = 0; i < 3 - (int)(log10(fib[1]) + 1); i++)
			{
				cout << "0";
			}
			
			cout << fib[1] << endl;
		}
	}
}
