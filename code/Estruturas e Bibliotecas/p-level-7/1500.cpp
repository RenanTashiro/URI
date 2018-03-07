/*
Nome:      Consultas Horríveis
ID:        1500
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.172s
Tamanho:   1,37 KB
Submissao: 08/06/17 18:25:18
*/
#include <bits/stdc++.h>
using namespace std;

#define LSOne(S) (S & (-S))

class BIT 
{
private:
	long long int *b1, *b2, size;
	
	void update(long long int *b, long long int p, long long int v)
	{
		for(; p <= size; p += LSOne(p)) b[p] += v;
	}	
	
	long long int query(long long int *b, int idx)
	{
		long long int sum = 0;
		
		for(; idx > 0; idx -= LSOne(idx)) sum += b[idx];
		
		return sum;
	}	
	
public:
	BIT(int n) {
		size = n;
		b1 = new long long int[n+1];
		b2 = new long long int[n+1];
	}

	void update(long long int a, long long int b, long long int v)
	{
		update(b1, a, v);
		update(b1, b + 1, -v);
		update(b2, a, v * (a - 1));
		update(b2, b + 1, -v * b);
	}
	
	long long int query(int idx)
	{
		return query(b1, idx) * idx - query(b2, idx);
	}
	
	long long int query(int a, int b)
	{
		return query(b) - query(a - 1);
	}
};

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N, C;
		
		scanf("%d%d", &N, &C);
		
		BIT bit(N);
		
		for(int i = 0; i < C; i++)
		{
			int op, p, q;
			
			scanf("%d%d%d", &op, &p, &q);
			
			if(op == 0)
			{
				int v;
				
				scanf("%d", &v);
				
				bit.update(p, q, v);
			}
			else
			{
				printf("%lld\n", bit.query(p, q));
			}
		}
	}
}
/*
0 26 26 26 0 0 0 0
0 26 26 106 80 80 80 80
0 26 26 126 100 80 80 80
0 26 26 126 114 94 94 80
*/
