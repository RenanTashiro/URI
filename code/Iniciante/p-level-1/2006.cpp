/*
Nome:      Identificando o Chá
ID:        2006
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   263 Bytes
Submissao: 11/12/15 17:21:11
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, tea[5] = {0};
    int guess;

    scanf("%d", &T);

    for(int i = 0; i < 5; i++) {
        scanf("%d", &guess);
        tea[guess]++;
    }

    printf("%d\n", tea[T]);
}
