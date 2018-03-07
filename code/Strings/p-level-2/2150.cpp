/*
Nome:      Vogais Alienígenas
ID:        2150
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   592 Bytes
Submissao: 22/07/16 10:48:50
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string vogais, texto;
    
    while(cin >> vogais)
    {
		cin.ignore();
        getline(cin, texto);
        
        if(texto == "")        
			break;
		

		set<char> vogais_set;
		
		for(int i = 0; i < (int)vogais.size(); i++)
		{
			vogais_set.insert(vogais[i]);
		}
		
		int counter = 0;
		
		for(int i = 0; i < (int)texto.size(); i++)
		{
			if(vogais_set.find(texto[i]) != vogais_set.end())
			{
				counter++;
			}
		}
		
		cout << counter << endl;
    }
    
    return 0;
}
