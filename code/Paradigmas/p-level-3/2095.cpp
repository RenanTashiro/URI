/*
Nome:      Guerra
ID:        2095
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   559 Bytes
Submissao: 24/06/16 17:08:17
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int S, result = 0;
	
	scanf("%d", &S);
	
	vector<int> q_soldiers(S), n_soldiers(S);
	
	for(int i = 0; i < S; i++) 
		scanf("%d", &q_soldiers[i]);
	
	for(int i = 0; i < S; i++) 
		scanf("%d", &n_soldiers[i]);
	
	sort(q_soldiers.begin(), q_soldiers.end());
	sort(n_soldiers.begin(), n_soldiers.end());
	
	for(int i = 0, j = 0; i < S && j < S;) {
		if(n_soldiers[i] > q_soldiers[j]) {
			result++;
			j++;
			i++;
		} else {
			i++;
		}
	}
	
	printf("%d\n", result);
}
