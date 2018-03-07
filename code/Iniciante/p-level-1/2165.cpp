/*
Nome:      Tuitando
ID:        2165
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   177 Bytes
Submissao: 25/07/16 22:34:54
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	
	if(str.size() <= 140)
		puts("TWEET");
	else
		puts("MUTE");
}
