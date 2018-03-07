/*
Nome:      Brincando Com Operadores
ID:        1696
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.652s
Tamanho:   1,85 KB
Submissao: 23/01/18 10:51:46
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	for(int t = 0; t < T; t++)
	{
		int n, q;
		
		cin >> n >> q;
		
		int values[n], tmp[n], sig[n];
		
		for(int i = 0; i < n; i++) {
			cin >> values[i];
			tmp[i] = values[i];	
			sig[i] = 1;
		}
		
		int until = n;
		bool plus = true;
		
		for (int b = 2; b < n; b *= 4)
			for (int i = b; i < n; i += 2*b)
				for (int j = 0; j < b && i+j < n; ++j)
					sig[i+j] *= -1;	
		
		while(until > 1)
		{	
			int idx = 0;
			
			for(int i = 0; i < until; idx++, i += 2)
			{
				if(plus)
					tmp[idx] = tmp[i] + tmp[i+1];
				else
					tmp[idx] = tmp[i] - tmp[i+1];
			}
			
			if(until % 2 != 0)
				tmp[idx-1] = tmp[until-1];
			
			if(until % 2 == 0)
				until /= 2;
			else
				until = until / 2 + 1;
				
			plus = !plus;
		}
					
		int value = tmp[0];
		
		cout << value;
		
		if(t % 2 == 0) {
			if(value % 2 == 0) {
				cout << " Sanches\n";
			} else {
				cout << " Rusa\n";
			}
		} else {
			if(value % 2 != 0) {
				cout << " Sanches\n";
			} else {
				cout << " Rusa\n";
			}
		}		
		
		for(int i = 0; i < q; i++)
		{
			int a, b;
			
			cin >> a >> b;
						
			int diff = b - values[a-1];				
			
			value += sig[a-1] * diff;
			values[a-1] = b;
			
			cout << value;	
				
			if(t % 2 == 0) {								
				if(value % 2 != 0) {
					cout << " Rusa\n";
				} else {
					cout << " Sanches\n";
				}
			} else {
				if(value % 2 == 0) {
					cout << " Rusa\n";
				} else {
					cout << " Sanches\n";
				}				
			}
		}		
	}
}
//~ 1 2 3 4 5 6 7
//~ 3 7 11 7
//~ -4 4
//~ 0


//~ from random import randint

//~ def gen(n, q):
	//~ print(n, q)
	//~ print(' '.join([str(randint(-10**4, 10**4)) for i in range(n)]))
	//~ for i in range(q):
		//~ print(randint(1, n), randint(-10**4, 10**4))
