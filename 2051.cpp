#include <bits/stdc++.h>

using namespace std;

void case1(int v[])
{
	puts("  0 1");
	printf("0|%d %d\n", v[0], v[2]);
	printf("1|%d %d\n", v[1], v[3]);
}

void case2(int v[])
{
	puts("  00 01 11 10");
	printf("0|%d  %d  %d  %d\n", v[0], v[2], v[6], v[4]);
	printf("1|%d  %d  %d  %d\n", v[1], v[3], v[7], v[5]);
}

void case3(int v[])
{
	puts("   00 01 11 10");
	printf("00|%d  %d  %d  %d\n", v[0], v[4], v[12], v[8]);
	printf("01|%d  %d  %d  %d\n", v[1], v[5], v[13], v[9]);
	printf("11|%d  %d  %d  %d\n", v[3], v[7], v[15], v[11]);
	printf("10|%d  %d  %d  %d\n", v[2], v[6], v[14], v[10]);
}

int main()
{	
	int C;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int N, v;
		char lixo[2];
		
		scanf("%d", &N);
		
		int values[(int)pow(2, N)];
		bool T = true, F = false;
		
		for(int i = 0; i < pow(2, N); i++)
		{
			for(int j = 0; j < N; j++) 
			{
				scanf("%d", &v);
			}
			scanf("%s", lixo);
			scanf("%d", &values[i]);
			if(values[i] == 0) 
				T = false;
			else if(values[i] == 1)
				F = true;
		}
		
		puts("Mapa de Karnaugh");
		
		switch(N) {		
		case 2: case1(values); break;	
		case 3: case2(values); break;
		case 4: case3(values); break;
		}
		
		if(T) 
			puts("Tautologia");
		else if(!F)
			puts("Contradicao");
		else
			puts("Contingencia");
			
		if(C != 0)
			puts("");
	}
}
