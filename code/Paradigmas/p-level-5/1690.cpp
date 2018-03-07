/*
Nome:      Soma de Sobconjuntos
ID:        1690
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.108s
Tamanho:   428 Bytes
Submissao: 12/01/18 09:48:15
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N;
		
		cin >> N;
		
		int arr[N];
		
		for(int i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		
		sort(arr, arr+N);
		
		long long sum = 0;
		
		for(int i = 0; i < N; i++)
		{
			if(arr[i] <= sum + 1) {
				sum += arr[i];
			} else {
				break;
			}
		}
		
		cout << sum + 1 << endl;
	}
}
