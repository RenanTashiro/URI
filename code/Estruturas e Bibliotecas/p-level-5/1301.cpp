/*
Nome:      Produto do Intervalo
ID:        1301
Resposta:  Accepted
Linguagem: C++
Tempo:     0.396s
Tamanho:   1,46 KB
Submissao: 08/06/17 19:36:57
*/
#include <bits/stdc++.h>
using namespace std;

#define LSOne(S) (S & (-S))

class BIT 
{
private:
	int size;
	vector<int> ft;
public:
	BIT(int n) {
		size = n;
		ft = vector<int>(n+1);
	}

	int sum(int b) {
		int sum = 0;
		for (; b; b -= LSOne(b)) sum += ft[b];
		return sum;
	}

	int sum(int a, int b) {
		return sum(b) - (a == 1 ? 0 : sum(a - 1));
	}

	void update(int k, int v) {
		for (; k <= size; k += LSOne(k)) ft[k] += v;
	}
};

int main()
{
	int N, K;
	
	while(cin >> N >> K)
	{
		BIT zero(N), negative(N);
		vector<int> prev_value(N+1, 1);
		
		for(int i = 1; i <= N; i++)
		{
			int xi;
			
			cin >> xi;
			
			if(xi < 0)
				negative.update(i, 1);
			else if(xi == 0)
				zero.update(i, 1);
				
			prev_value[i] = xi;
		}
		
		string ans = "";
		
		for(int i = 0; i < K; i++)
		{
			char op;
			int a, b;
			
			cin >> op >> a >> b;
			
			if(op == 'C')
			{
				int prev = prev_value[a];
				
				prev_value[a] = b;
				
				if(prev < 0 && b >= 0)
					negative.update(a, -1);
				else if(prev >= 0 && b < 0)
					negative.update(a, 1);
				
				if(prev != 0 && b == 0)
					zero.update(a, 1);
				else if(prev == 0 && b != 0)
					zero.update(a, -1);
			}
			else
			{				
				if(zero.sum(a, b) > 0)
				{
					ans += "0";
				}
				else if(negative.sum(a, b) % 2 == 0)
				{
					ans += "+";
				}
				else
				{
					ans += "-";
				}
			}
		}
		
		cout << ans << endl;
	}
}
