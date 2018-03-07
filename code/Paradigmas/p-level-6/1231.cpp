/*
Nome:      Palavras
ID:        1231
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.224s
Tamanho:   1,53 KB
Submissao: 07/03/18 14:40:43
*/
#include <bits/stdc++.h>
using namespace std;

// return a string s with |s| = max(|s1|,|s2|) - min(|s1|,|s2|)
string reduce(string s1, string s2)
{
	if(s1.size() < s2.size())
		return s1 != "" ? s1 : "!";
	for(unsigned i = 0; i < min(s1.size(),s2.size()); i++)
		if(s1[i] != s2[i])
			return "!";
			
	return &s1[s2.size()];	
}

bool solve(vector<string> N1, vector<string> N2)
{
	queue<string> next;
	unordered_set<string> visited;
	
	for(string s1 : N1) {
		next.push(s1);
		visited.insert(s1);
	}
	
	while(!next.empty())
	{
		string S = next.front(); next.pop();
		
		for(string s1 : N1) {
			for(string s2 : N2) {				
				string s = reduce(S + s1, s2);

				if(s == "")
					return true;
				else if(s == "!")
					continue;
				else if(visited.find(s) == visited.end()) {
					if(s.size() <= S.size()) {
						next.push(s);
						visited.insert(s);
					} else {
						for(string t2 : N2) {
							if(s.size() <= t2.size()) {
								string ss = reduce(t2, s);
								
								if(ss != t2 && ss != "!" && visited.find(s) == visited.end()) {
									next.push(s);
									visited.insert(s);
									break;
								}
							}
						}						
					}
				}
			}
		}
		
	}

	return false;
}
	
int main()
{
	int n1, n2;
	
	while(scanf("%d%d", &n1, &n2) != EOF)
	{
		vector<string> N1(n1), N2(n2);
		
		N2.push_back("");
		
		for(int i = 0; i < n1; i++)
			cin >> N1[i];
			
		for(int i = 0; i < n2; i++)
			cin >> N2[i];
			
		cout << (solve(N2, N1) ? "S" : "N") << endl;
	}
}
	