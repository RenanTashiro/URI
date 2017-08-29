/*
Nome:      Batalha de Pomekons
ID:        2221
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   480 Bytes
Submissao: 07/09/16 11:41:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int B;
		
		scanf("%d", &B);
		
		int Ad, Dd, Ld, Ag, Dg, Lg;
		
		scanf("%d%d%d%d%d%d", &Ad, &Dd, &Ld, &Ag, &Dg, &Lg);
		
		double VGd = (Ad + Dd) / 2 + (Ld % 2 == 0 ? B : 0);
		double VGg = (Ag + Dg) / 2 + (Lg % 2 == 0 ? B : 0);
		
		if(VGd > VGg)
			puts("Dabriel");
		else if(VGd < VGg)
			puts("Guarte");
		else
			puts("Empate");
	}
}

