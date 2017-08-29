/*
Nome:      Onde estão meus Genes
ID:        1271
Resposta:  Accepted
Linguagem: C++
Tempo:     0.320s
Tamanho:   702 Bytes
Submissao: 10/06/17 08:25:09
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, test = 1;
	
	while(cin >> N && N != 0)
	{
		int genoma[N];
		
		for(int i = 0; i < N; i++)
		{
			genoma[i] = i;
		}
		
		int R;
		
		cin >> R;
		
		for(int i = 0; i < R; i++)
		{
			int a, b;
			
			cin >> a >> b;
			
			for(int j = a - 1, k = b - 1; j < k; j++, k--)
			{
				swap(genoma[j], genoma[k]);
			}
		}
		
		int Q;
		
		cin >> Q;
		
		cout << "Genome " << test++ << endl;
		
		for(int i = 0; i < Q; i++)
		{
			int g;
			
			cin >> g;
			
			for(int j = 0; j < N; j++)
			{
				if(genoma[j] == g - 1)
				{
					cout << j + 1 << endl;
					break;
				}
			}
		}
	}
}
