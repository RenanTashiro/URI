/*
Nome:      Domingo de Manhã
ID:        2003
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   240 Bytes
Submissao: 30/11/15 21:07:55
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H, M;

    while(scanf("%d:%d", &H, &M) != EOF) {
        int ans = (60+M)+(H-8)*60;
        printf("%s: %d\n", "Atraso maximo", ans <= 0 ? 0 : ans);
    }
}
