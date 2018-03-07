/*
Nome:      Elementar, meu Caro Watson!
ID:        1382
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.268s
Tamanho:   618 Bytes
Submissao: 04/01/16 10:47:27
*/
#include <bits/stdc++.h>

using namespace std;

int selection_count_sort(int arr[], const int SIZE) 
{
	int counter = 0;
	for(int i = 1; i <= SIZE; i++) {
		if(arr[i-1] == i) continue;
		for(int j = i-1; j < SIZE; j++) {
			if(arr[j] == i) {
				swap(arr[j], arr[i-1]);
				counter++;
				break;
			}
		}
	}
	return counter;
}

int main()
{
	int TC;
	
	scanf("%d", &TC);
	
	while(TC--)
	{
		int N;
		
		scanf("%d", &N);
		
		int arr[N];
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);			
		}
		
		int ans = selection_count_sort(arr, N);

		printf("%d\n", ans);
	}
}