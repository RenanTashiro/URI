/*
Nome:      amelborP mU
ID:        2066
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   544 Bytes
Submissao: 24/05/16 17:21:33
*/
#include <bits/stdc++.h>

using namespace std;

long long base[18] = 
{
 0, 
 8, 
 80, 
 845, 
 8450,
 84950, 
 849500, 
 8499500, 
 84995000, 
 849995000,
 8499950000, 
 84999950000, 
 849999500000, 
 8499999500000, 
 84999995000000, 
 849999995000000, 
 8499999950000000, 
 84999999950000000
};
	

int main()
{
	int K;
	
	cin >> K;
	
	long long int ans = 0, value = base[K-1];
	
	for(int i = 0; i <= 8; i++) {
		if(value > 0) 
			ans += value;
		value -= pow(10, K-2);
	}
	
	cout << ans << endl;
}	
