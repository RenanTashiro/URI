/*
Nome:      Etiquetas Coloridas
ID:        2233
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   397 Bytes
Submissao: 12/09/16 20:25:40
*/
#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned long long R, G, B;
    
    scanf("%llx%llx%llx", &R, &G, &B);
    
    unsigned long long ginr = (unsigned long long)(R/G) * (unsigned long long)(R/G);
    unsigned long long bing = (unsigned long long)(G/B) * (unsigned long long)(G/B);
    
    printf("%llx\n", 1 + ginr + ginr * bing);
 
    return 0;
}
