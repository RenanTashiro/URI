/*
Nome:      Azulejos
ID:        1512
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   211 Bytes
Submissao: 09/06/17 16:03:54
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, A, B;
	
	while(cin >> N >> A >> B && N && A && B)
	{				
		cout << (N / A) + (N / B) - (N / ((A * B) / __gcd(A, B))) << endl;
	}
}
