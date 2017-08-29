/*
Nome:      Tuitando
ID:        2165
Resposta:  Accepted
Linguagem: C++
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
