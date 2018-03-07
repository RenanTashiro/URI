/*
Nome:      Cachorros-Quentes
ID:        2234
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   159 Bytes
Submissao: 12/09/16 20:14:36
*/
#include <iostream>
 
using namespace std;
 
int main() {
    int N, H;
    scanf("%d%d", &N, &H);
    printf("%.2lf\n", (double)N/H);
    return 0;
}