/*
Nome:      Como Treinar Seu Dragão
ID:        1851
Resposta:  Accepted
Linguagem: C++
Tempo:     0.080s
Tamanho:   787 Bytes
Submissao: 12/01/16 22:41:31
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<long long,long long> ii;

int main()
{
	long long T, F, ans = 0, day = 0, train_day = 0;
	long long counter = 0;
	priority_queue<pair<double,pair<long long,ii>>> pq;
	
	while(scanf("%lld%lld", &T, &F) != EOF) {
		pq.push({-1.0*T/F,{day,{T, F}}});
		if(!counter) {
			pair<double,pair<int,ii>> u = pq.top(); pq.pop();
			ans += (train_day - u.second.first) * u.second.second.second;
			train_day += u.second.second.first;
			counter += u.second.second.first;
		} 
		counter--;
		day++;
	}

	while(!pq.empty()) {
		pair<double,pair<int,ii>> u = pq.top(); pq.pop();
		ans += (train_day - u.second.first) * u.second.second.second;
		train_day += u.second.second.first;
	}
	
	printf("%lld\n", ans);
}