/*
Nome:      Soma Natural
ID:        1805
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   263 Bytes
Submissao: 29/06/15 20:14:26
*/
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
    long long int A1, AN, N, SOMA;

    scanf ("%lld%lld", &A1, &AN);
    N = AN - A1 + 1;
    SOMA = (((A1 + AN)*N)/2);
    printf ("%lld\n", SOMA);

}
