/*
Nome:      Sete
ID:        2590
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.684s
Tamanho:   290 Bytes
Submissao: 14/06/17 19:48:00
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int possible_ans[] = {1, 7, 9, 3};
    int T;

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int N;

        scanf("%d", &N);

        printf("%d\n", possible_ans[N % 4]);
    }
}
