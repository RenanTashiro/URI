/*
Nome:      Quadradinho de 8
ID:        2438
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.096s
Tamanho:   536 Bytes
Submissao: 14/02/18 11:52:22
*/
#include <bits/stdc++.h>
using namespace std;

long long count(int div, int arr[], int n)
{
    long long sum = 0, ans = 0;
    long long c[div], r;
    
    memset(c, 0, sizeof c);    
    c[0] = 1;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        r = sum % div;
        ans += c[r];
        c[r]++;
    }
    
    return ans;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("%lld\n", count(8, arr, n));
}
