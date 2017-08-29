/*
Nome:      Pepe, Já Tirei a Vela!
ID:        2152
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   384 Bytes
Submissao: 19/07/16 12:40:47
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int C;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int H, M, O;
		
		scanf("%d%d%d", &H, &M, &O);
		
		int f1 = floor(1 + (double)log10(H));
		int f2 = floor(1 + (double)log10(M));
		
		printf("%s%d:%s%d - %s\n", f1 > 1 ? "" : "0", H, f2 > 1 ? "" : "0", M, O ? "A porta abriu!" : "A porta fechou!");
	}
}
