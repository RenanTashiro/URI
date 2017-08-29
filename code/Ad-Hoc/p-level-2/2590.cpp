/*
Nome:      Sete
ID:        2590
Resposta:  Accepted
Linguagem: C++
Tempo:     0.564s
Tamanho:   261 Bytes
Submissao: 14/06/17 19:49:38
*/
#include <cstdio>

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
