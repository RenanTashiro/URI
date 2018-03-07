/*
Nome:      Natal de Pedrinho
ID:        2139
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   496 Bytes
Submissao: 14/07/16 20:51:41
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int month_rel[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
	int month, day;
	
	while(scanf("%d%d", &month, &day) != EOF)
	{
		if(month == 12)
		{
			if(day == 25)
				puts("E natal!");		
			else if(day == 24)
				puts("E vespera de natal!");
			else if(day > 25)
				puts("Ja passou!");		
		}
		else
		{
			printf("Faltam %d dias para o natal!\n", 360 - (month_rel[month-1] + day));
		}
	}
}
