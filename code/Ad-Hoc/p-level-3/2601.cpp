/*
Nome:      Tustin e Seu Dado Antigo
ID:        2601
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   668 Bytes
Submissao: 13/01/18 09:50:11
*/
/*
1
2 3 4 5
6

(P(A)+P(B)+P(C)) 


AB CD
AB DC
BA CD
BA DC

ABCD*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int C;
	
	cin >> C;
	
	while(C--)
	{
		bool k[6];
		
		for(int i = 0; i < 6; i++)
		{
			string v;
			
			cin >> v;
			
			if(v == "*") 
				k[i] = true;
			else
				k[i] = false;
		}
		
		int p1 = k[0] + k[5];
		int p2 = k[1] + k[3];
		int p3 = k[2] + k[4];
		int d = (p1 > 1 ? 1 : 0) + (p2 > 1 ? 1 : 0) + (p3 > 1 ? 1 : 0);
		
		if(d == 3)
			d = 6;
		
		int ans = (p1 != 0 ? p1 : 1) * (p2 != 0 ? p2 : 1) * (p3 != 0 ? p3 : 1) * d;
		
		cout << (ans == 0 ? 1 : ans) << endl;
			
	}
}

