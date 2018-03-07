/*
Nome:      Nim Intergalático
ID:        1688
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.812s
Tamanho:   565 Bytes
Submissao: 22/01/18 10:34:21
*/
#include <bits/stdc++.h>
using namespace std;

long long sumxor(long long n)
{
	if(n % 2 == 0)
		return (n & ~1) | ((n ^ (n >> 1)) & 1);
	else
		return (n ^ (n >> 1)) & 1;
}

long long sumxor(long long a, long long b)
{
	return sumxor(b) ^ sumxor(a-1);
}

int main()
{
	long long N;
	int Q;
	
	while(cin >> N >> Q)
	{
		while(Q--)
		{
			long long A, B, K;
			
			cin >> A >> B >> K;
			
			long long grundy_number = sumxor(N) ^ sumxor(A, B) ^ sumxor(A+K, B+K);
				
			cout << (grundy_number ? "JABBA" : "HAN") << endl;
		}
	}
}
