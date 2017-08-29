/*
Nome:      Decifra
ID:        2464
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   355 Bytes
Submissao: 10/06/17 16:54:33
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char code[26];
	
	string the_code;
	
	cin >> the_code;
	
	for(int i = 0; i < 26; i++)
	{
		code[i] = the_code[i];
	}
	
	string phrase;
	
	cin >> phrase;
	
	for(int i = 0; phrase[i] != '\0'; i++)
	{
		phrase[i] = code[phrase[i] - 'a'];
	}
	
	cout << phrase << endl;
}
