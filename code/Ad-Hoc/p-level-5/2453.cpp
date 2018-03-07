/*
Nome:      Língua do P
ID:        2453
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   466 Bytes
Submissao: 10/06/17 16:44:15
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string word, nword = "";
	
	getline(cin, word);
	
	bool found = false;
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		if(!found && word[i] == 'p')
		{
			found = true;
		}
		else if(found && word[i] == ' ')
		{
			nword += "p ";
			found = false;
		}
		else
		{
			nword += word[i];
			found = false;
		}
	}
	
	if(found)
	{
		nword += "p";
	}
	
	cout << nword << endl;
}
