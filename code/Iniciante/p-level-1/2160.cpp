/*
Nome:      Nome no Formulário
ID:        2160
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   164 Bytes
Submissao: 25/07/16 22:34:06
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	
	cout << (str.size() <= 80 ? "YES" : "NO") << endl;
}
