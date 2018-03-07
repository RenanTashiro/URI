/*
Nome:      Sensate
ID:        2657
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.072s
Tamanho:   1,55 KB
Submissao: 10/09/17 16:45:22
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int R[10005];
ii p[10005];

int findSet(int i) {
	return (p[i].first == i) ? i : (p[i].first = findSet(p[i].first));
}

int findValue(int i) {
	return p[findSet(i)].second;
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	if(!isSameSet(i, j)) {
		int x = findSet(i), y = findSet(j);
		if(R[x] > R[y]) {
			p[y].first = x;
		}
		else {
			p[x].first = y;
			if(R[x] == R[y]) R[y]++;
		}

		int max_skill = max(p[x].second, p[y].second);

		p[y].second = max_skill;
		p[x].second = max_skill;
	}
}

bool query(int nid, int skill[])
{
    int cluster_max_skill_level = findValue(nid);

    return skill[nid] >= 5 || (skill[nid] < 5 && cluster_max_skill_level <= 5);
}

int main()
{
    int N, M, Q;

    cin >> N >> M >> Q;

    map<string,int> name_id;
    int skill[N], id = 0;

    for(int i = 0; i < N; i++)
    {
        string name;

        cin >> name >> skill[i];

        name_id[name] = id++;
    }

    for(int i = 0; i < N; i++)
        p[i].first = i, p[i].second = skill[i], R[i] = 0;

    for(int i = 0; i < M; i++)
    {
        string u, v;
        int u_id, v_id;

        cin >> u >> v;

        u_id = name_id[u];
        v_id = name_id[v];

        unionSet(u_id, v_id);
    }

    while(Q--)
    {
        string name;
        int nid;

        cin >> name;

        nid = name_id[name];

        cout << (query(nid, skill) ? "S\n" : "N\n");
    }
}
