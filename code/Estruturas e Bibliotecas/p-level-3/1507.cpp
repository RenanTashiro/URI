/*
Nome:      Subsequências
ID:        1507
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   464 Bytes
Submissao: 03/01/16 10:13:38
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int TC;
	
	cin >> TC;
	
	while(TC--) 
	{
		string seq;
		
		cin >> seq;
		
		int Q;
		
		cin >> Q;
		
		while(Q--) {
			string sub;
			size_t i, j;
			cin >> sub;
			for(i = 0, j = 0; i < seq.size() && j < sub.size(); i++) {
				if(seq[i] == sub[j]) {
					j++;
				}
			}
			cout << (j == sub.size() ? "Yes" : "No") << '\n';
		}
	}
}
