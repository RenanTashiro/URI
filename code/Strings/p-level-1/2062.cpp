/*
Nome:      OBI URI
ID:        2062
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   407 Bytes
Submissao: 23/05/16 22:47:21
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	string tag;
	
	for(int i = 0; i < N; i++) {
		cin >> tag;
		if(i > 0) cout << " ";
		if(tag.size() == 3)  {
			if(tag[0] == 'O' && tag[1] == 'B') cout << "OBI";
			else if(tag[0] == 'U' && tag[1] == 'R') cout << "URI";
			else cout << tag;
		}
		else {
			cout << tag;
		}
	}
	
	cout << endl;
}
