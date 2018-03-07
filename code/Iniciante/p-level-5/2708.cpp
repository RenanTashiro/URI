/*
Nome:      Turistas no Parque Huacachina
ID:        2708
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   468 Bytes
Submissao: 21/12/17 17:21:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string action;
	int jeeps_out = 0;
	int peoples_out = 0;

	while(cin >> action)
	{
		int value;

		if(action == "ABEND")
			break;
		else {
			cin >> value;

			if(action == "SALIDA") {
				jeeps_out++;
				peoples_out += value;
			}
			else if(action == "VUELTA") {
				jeeps_out--;
				peoples_out -= value;
			}
		}
	}

	cout << peoples_out << '\n' << jeeps_out << '\n';
}
