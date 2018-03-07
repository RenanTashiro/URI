/*
Nome:      Times
ID:        2370
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.024s
Tamanho:   668 Bytes
Submissao: 10/06/17 19:20:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, T;
	
	cin >> N >> T;
	
	vector<pair<int,string>> players;
	
	for(int i = 0; i < N; i++)
	{
		string name;
		int ability;
		
		cin >> name >> ability;
		
		players.push_back({ability, name});
	}
	
	sort(players.rbegin(), players.rend());
	
	vector<vector<string>> teams(T);
	
	for(int i = 0; i < N; i++)
	{
		teams[i % T].push_back(players[i].second);
	}
	
	for(int i = 0; i < T; i++)
	{
		cout << "Time " << i + 1 << endl;
		
		sort(teams[i].begin(), teams[i].end());
		
		for(auto name : teams[i])
		{
			cout << name << endl;
		}
		
		cout << endl;
	}
}
