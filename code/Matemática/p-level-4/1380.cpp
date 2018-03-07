/*
Nome:      Crescimento das Populações de Bacilos
ID:        1380
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.028s
Tamanho:   547 Bytes
Submissao: 11/09/17 16:14:45
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int fib[1500] = {0, 1, 1};
	
	for(int i = 3; i < 1500; i++)
		fib[i] = fib[i-1] + fib[i-2], fib[i] %= 1000;
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		string K;
		int value = 0;
		
		cin >> K;
		
		for(int i = 0; K[i]; i++)
			value = 10*value + K[i]-'0', value %= 1500;
		
		string number = to_string(fib[value]);
		
		for(int i = 0; i < 3-(int)number.size(); i++)
			cout << '0';
			
		cout << fib[value] << endl;
	}
}
