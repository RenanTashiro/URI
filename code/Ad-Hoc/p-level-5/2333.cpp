/*
Nome:      Pizza
ID:        2333
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   656 Bytes
Submissao: 13/02/18 08:52:39
*/
#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
	int mans = 0, cans = 0;
	
	for(int i = 0; i < n; i++)
	{
		cans += arr[i];
		
		if(cans < 0)
			cans = 0;
		
		mans = max(mans, cans);
	}
	
	return mans;
}

int circular_kadane(int arr[], int n)
{
	int ans = kadane(arr, n);
	int sum = 0;
	
	for(int i = 0; i < n; i++) {
		sum += arr[i];
		arr[i] = -arr[i];
	}
	
	ans = max(ans, sum + kadane(arr, n));
	
	return ans;
}


int main()
{
	int n;
	
	scanf("%d", &n);
		
	int arr[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	printf("%d\n", circular_kadane(arr, n));
}
