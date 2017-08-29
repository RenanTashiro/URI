/*
Nome:      Estágio
ID:        2248
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   447 Bytes
Submissao: 23/06/17 20:47:12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, test = 1;
	
	while(cin >> N && N)
	{
		cout << "Turma " << test++ << endl;
		
		int max_n = 0, code[N], avg[N];
		
		for(int i = 0; i < N; i++)
		{			
			cin >> code[i] >> avg[i];
			
			max_n = max(max_n, avg[i]);
		}
		
		for(int i = 0; i < N; i++)
		{
			if(avg[i] == max_n) {
				cout << code[i] << ' ';
			}
		}
		
		cout << endl << endl;
	}
}
