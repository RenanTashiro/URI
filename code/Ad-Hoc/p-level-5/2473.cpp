/*
Nome:      Loteria
ID:        2473
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   542 Bytes
Submissao: 19/12/16 13:51:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> folheto;
	
	int numero, counter = 0;
	
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &numero);
		folheto.insert(numero);
	}
	
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &numero);
		if(folheto.find(numero) != folheto.end())
			counter++;
	}
	
	if(counter < 3)
		puts("azar");
	else if(counter == 3)
		puts("terno");
	else if(counter == 4)
		puts("quadra");
	else if(counter == 5)
		puts("quina");
	else if(counter == 6)
		puts("sena");
}	
