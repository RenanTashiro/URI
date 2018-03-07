/*
Nome:      Despojados
ID:        2661
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   837 Bytes
Submissao: 14/09/17 14:56:37
*/
// Autor: colega de time de maratona
#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> ii;
typedef vector<long long> vi;
typedef vector<ii> vii;
#define INF 1000000000

long long fat[21];
vii fatores;
long long comb(int n, int p)
{
	return fat[n]/(fat[p]*fat[n-p]);
}
void fator(long long n)
{
	long long e=0;
	for(; n%2==0; n/=2, e++);
	if(e)
		fatores.push_back({2, e});
	for(long long i=3; i<=ceil(sqrt(n)); i+=2)
	{
		e=0;
		for(; n%i==0; n/=i, e++);
		if(e)
			fatores.push_back({i, e});
	}
	if(n>1)
		fatores.push_back({n, 1});
}
int main(){
	long long n, despojados=0;
	fat[0]=1;
	for(int i=1; i<21; i++)
		fat[i]=fat[i-1]*i;
	cin>>n;
	fator(n);
	for(long long i=2; i<=fatores.size(); i++)
		despojados+=comb(fatores.size(), i);
	cout<<despojados<<endl;
}
