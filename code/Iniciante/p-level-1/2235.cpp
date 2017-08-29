/*
Nome:      Andando no Tempo
ID:        2235
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   279 Bytes
Submissao: 12/09/16 20:21:28
*/
#include <iostream>
 
using namespace std;
 
int main() 
{
    int A, B, C;
    
    scanf("%d%d%d", &A, &B, &C);
    
    if(A + B == C || A + C == B || B + C == A || A == C || A == B || B == C)
        puts("S");
    else
        puts("N");
    
    return 0;
}