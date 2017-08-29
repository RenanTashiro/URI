/*
Nome:      Precisa-se de Matemáticos em Marte
ID:        1804
Resposta:  Accepted
Linguagem: C++
Tempo:     0.484s
Tamanho:   1,33 KB
Submissao: 08/06/17 17:50:57
*/
#include <bits/stdc++.h>
using namespace std;

#define LSOne(a) (a & (-a))

class BIT 
{
private:
	int* ft, size;
public:
	BIT(int n) {
		size = n;
		ft = new int[n+1];
	}

	int readSingle(int idx){
		int sum = ft[idx]; // sum will be decreased
		if (idx > 0){ // special case
			int z = idx - (idx & -idx); // make z first
			idx--; // idx is no important any more, so instead y, you can use idx
			while (idx != z){ // at some iteration idx (y) will become z
				sum -= ft[idx]; 
				// substruct tree frequency which is between y and "the same path"
				idx -= (idx & -idx);
			}
		}
		return sum;
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
	int N;
	
	scanf("%d", &N);
	
	BIT buggy(N);
	
	for(int i = 0; i < N; i++)
	{
		int p;
		
		scanf("%d", &p);
		
		buggy.update(i + 1, p);
	}
	
	char op[2];
	int idx, already[100005] = {0};

	while(scanf("%s%d", op, &idx) != EOF)
	{	
		if(op[0] == 'a')
		{
			if(already[idx]) continue;
			
			already[idx] = 1;
			buggy.update(idx, -buggy.readSingle(idx));
		}
		else 
		{
			cout << buggy.sum(idx-1) << endl;
		}
	}
}
