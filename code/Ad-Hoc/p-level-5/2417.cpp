/*
Nome:      Campeonato
ID:        2417
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   351 Bytes
Submissao: 10/06/17 20:05:01
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Cv, Ce, Cs, Fv, Fe, Fs;
	
	cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
	
	if(Cv * 3 + Ce != Fv * 3 + Fe)
	{
		cout << (Cv * 3 + Ce > Fv * 3 + Fe ? "C" : "F") << endl;
	}
	else if(Cs != Fs)
	{
		cout << (Cs > Fs ? "C" : "F") << endl;
	}
	else
	{
		cout << "=\n";
	}
}
