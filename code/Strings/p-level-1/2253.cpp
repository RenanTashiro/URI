/*
Nome:      Validador de Senhas
ID:        2253
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   535 Bytes
Submissao: 19/09/16 21:22:18
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string pass;
	
	while(getline(cin, pass))
	{
		bool lower = false, upper = false, number = false, invalid = false;
		
		for(char c : pass)
		{
			if(isupper(c))
				upper = true;
			else if(islower(c))
				lower = true;
			else if(isdigit(c))
				number = true;
			else
				invalid = true;
		}
		
		if(!invalid && lower && upper && number && pass.size() > 5 && pass.size() < 33)
			puts("Senha valida.");
		else
			puts("Senha invalida.");
	}
}
