/*
Nome:      Selos
ID:        2402
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   338 Bytes
Submissao: 11/06/17 10:20:56
*/
#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long N)
{
	if(N % 2 == 0)
		return false;
	
	for(int i = 3; i < (int)sqrt(N); i += 2)
	{
		if(N % i == 0)
			return false;
	}
	
	return true;
}

int main()
{
	long long int N;
	
	cin >> N;
	
	cout << (!is_prime(N) && N > 3 ? "S" : "N") << endl;
}
