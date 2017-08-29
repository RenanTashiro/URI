/*
Nome:      Fusões
ID:        2380
Resposta:  Accepted
Linguagem: C++
Tempo:     0.072s
Tamanho:   1,09 KB
Submissao: 10/06/17 19:13:11
*/
#include <bits/stdc++.h>
using namespace std;

struct subset
{
    int parent;
    int rank;
};
 
int find(vector<subset> &subsets, int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 
void Union(vector<subset> &subsets, int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int main()
{
	int N, K;
	
	cin >> N >> K;
	
	vector<subset> bank(N);
	
	for(int i = 0; i < N; i++)
	{
		bank[i].parent = i;
		bank[i].rank = 0;
	}
	
	for(int i = 0; i < K; i++)
	{
		char op[2];
		int a, b;
		
		cin >> op >> a >> b;
		
		if(op[0] == 'F')
		{
			Union(bank, a - 1, b - 1);
		}
		else
		{
			cout << (find(bank, a - 1) == find(bank, b - 1) ? "S" : "N") << endl;
		}
	}
}
