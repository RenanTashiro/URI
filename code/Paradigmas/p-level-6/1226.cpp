/*
Nome:      Elevador Espacial
ID:        1226
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   2,85 KB
Submissao: 05/03/18 15:52:38
*/
#include <bits/stdc++.h>
using namespace std;

int findDec(unsigned long long n, unsigned long long f[]) 
{
	for(int i = 0; i <= 18; i++)
		if(n <= f[i]) 
			return i+1;
	return -1;
}

int main()
{
	unsigned long long f[19] = {8, 79};
	
	for(int i = 2; i <= 18; i++) {
		f[i] = 2 * f[i-1] - f[i-2] + 7 * (f[i-1]+1);
	}
	
	unsigned long long N;
	int limit = -1; // diz em quantas casas aquele andar esta
	
	while(scanf("%llu", &N) != EOF)
	{
		int decimals = findDec(N, f);
		int prevValue = -1;
		
		for(int k = decimals-1; k >= 0; k--) {	
			if(N == 0) {
				printf("0");
				continue;
			}
			
			// acha quantas casas decimais o numero do andar possui
			for(int i = 0; i <= 18; i++)
				if(N <= f[i]) {
					limit = i;
					break;
				}
				
			while(k > limit) {
				printf("0");
				prevValue = 0;
				k--;
			}

			// acha o valor da primeira casa
			unsigned long long one;
			
			if(limit == 0) {
				if(N <= 3) {
					printf("%d", (int)N);
					prevValue = (int)N;
				}
				else {
					printf("%d", (int)N+1);
					prevValue = (int)N+1;
				}
					
				N = 0;
			}
			else {
				if(limit == 1) // caso especial
					one = 16;
				else
					one = 2 * f[limit-1] - f[limit-2];
				
				if(N <= one) {
					printf("1");
					prevValue = 1;
					
					if(limit == 1) {
						N -= 9;
					
						// tratamento especial
						if(N >= 3) 
							N++;
					} else {
						N -= f[limit-1]+1;
					}
				}
				else {
					unsigned long long value = one;
					
					for(int i = 2; i < 10; i++) {
						if(i == 4 || (prevValue == 1 && i == 3)) 
							continue;
							
						if(limit == 1) // caso especial
							value += 9;
						else
							value += f[limit-1]+1;
						
						if(N <= value) {
							printf("%d", i);
							prevValue = i;
							N -= (value - f[limit-1]);
							break;
						}
					}
				}
			}
		}
		
		puts("");
	}
}

//~ x=8
//~ xx=79
//~ xxx=710
//~ xxxx=6318
//~ xxxxx=56159
//~ xxxxxx=499120
//~ xxxxxxx=4435928
//~ xxxxxxxx=39424239
//~ xxxxxxxxx=350382230
//~ xxxxxxxxxx=3114015838
//~ xxxxxxxxxxx=27675760319
//~ xxxxxxxxxxxx=245967827040
//~ xxxxxxxxxxxxx=2186034683048
//~ xxxxxxxxxxxxxx=19428344320399
//~ xxxxxxxxxxxxxxx=172669064200550
//~ xxxxxxxxxxxxxxxx=1534593233484558
//~ xxxxxxxxxxxxxxxxx=13638670037160479
//~ xxxxxxxxxxxxxxxxxx=121213437100959760
//~ xxxxxxxxxxxxxxxxxxx=1077282263871477368

//~ 0x 1x 2x 3x 4x 5x 6x 7x 8x 9x
 //~ 8  8  9  9  0  9  9  9  9  9 = 79

//~ 0xx 1xx 2xx 3xx 4xx 5xx 6xx 7xx 8xx 9xx
 //~ 79  71  80  80   0  80  80  80  80  80 = 710

//~ 0xxx 1xxx 2xxx 3xxx 4xxx 5xxx 6xxx 7xxx 8xxx 9xxx
 //~ 710  631  711  711    0  711  711  711  711  711 = 6318
 
//~ 0xxxx 1xxxx 2xxxx 3xxxx 4xxxx 5xxxx 6xxxx 7xxxx 8xxxx 9xxxx
 //~ 6318  5608  6319  6319     0  6319  6319  6319  6319  6319 
 
/*
96270656075926
*/
