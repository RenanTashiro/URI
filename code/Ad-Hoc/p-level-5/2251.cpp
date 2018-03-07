/*
Nome:      Torres de Hanói
ID:        2251
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   270 Bytes
Submissao: 13/09/16 12:54:01
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int teste = 1;
    int h;
    
    while(scanf("%d", &h) && h != 0)
    {
        printf("Teste %d\n", teste++);
        printf("%d\n\n", (int)pow(2, h) - 1);
    }
    
    return 0;
}