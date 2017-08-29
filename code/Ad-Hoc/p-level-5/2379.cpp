/*
Nome:      Dança Indígena
ID:        2379
Resposta:  Accepted
Linguagem: C++
Tempo:     0.160s
Tamanho:   1,06 KB
Submissao: 15/06/17 17:13:21
*/
    #include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

typedef pair<int, int> pii;

inline int mod(int a, int n){
	return ((a%n)+n)%n;
}

int main(void){
	int toras, indios;
	cin >> toras >> indios;

	vector<pii> toraind;

	set<int> pos;

	for(int i = 0; i < indios; i++){
		int tora, sentido;
		cin >> tora >> sentido;
		pos.insert(tora-1);
		toraind.push_back(pii(tora-1,sentido));
	}

	sort(toraind.begin(), toraind.end());

	int res=-1;

	for(int i = 1; i < indios; i++){
		set<int> atual;

		int dist = toraind[i].first - toraind[0].first;
		if(toraind[0].second == -1) dist = toras - dist;

		bool ok=true;
		for(int i = 0; i < indios; i++){
			int new_pos = mod(toraind[i].first + toraind[i].second*dist, toras);
			if(pos.find(new_pos) == pos.end()){
				ok = false;
				break;
			}
			atual.insert(new_pos);
		}

		if(ok && atual.size() == indios){
			if(res == -1 || res > dist) res = dist;
		}
	}

	printf("%d\n", res == -1 ? toras : res);

	return 0;
}  