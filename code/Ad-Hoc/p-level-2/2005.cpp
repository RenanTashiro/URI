/*
Nome:      Fracil Bolado
ID:        2005
Resposta:  Accepted
Linguagem: C++
Tempo:     0.056s
Tamanho:   818 Bytes
Submissao: 26/12/15 17:03:55
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M;
	
	while(cin >> N >> M) 
	{
		map<int,int> rat;
		int value, ans = 0;
		
		for(int i = 0; i < N; i++) {
			cin >> value;
			rat[-value]++;
		}
		
		for(int i = 0; i < M; i++) {
			cin >> value;
			map<int,int>::iterator it = rat.lower_bound(-value), it_begin;
			if(!rat.empty()) {
				if(it->first < 0) {
					int remain = --rat[it->first];
					if(remain == 0) {
						rat.erase(it);
					}
					ans++;				
				}
				else if(it->first > 0) {
					it_begin = rat.begin();
					int key = it_begin->first, remain = --rat[it_begin->first];
					rat[key+value]++;
					if(remain == 0) {
						rat.erase(it_begin);
					}					
				}
			}
		}
		
		cout << ans << endl;
	}
}
