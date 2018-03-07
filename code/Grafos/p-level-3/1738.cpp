/*
Nome:      Rede de Fibra
ID:        1738
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.060s
Tamanho:   1,18 KB
Submissao: 01/07/17 20:57:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(scanf("%d", &N) && N)
    {
        int graph[205][205] = {}, A, B;

        // read graph
        while(scanf("%d%d", &A, &B) && A)
        {
            char company[30];

            scanf("%s", company);

            for(int i = 0; company[i] != '\0'; i++)
            {
                graph[A-1][B-1] |= (1 << (company[i] - 'a'));
            }
        }

        for(int k = 0; k < N; k++)
        {
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < N; j++)
                {
                    graph[i][j] |= graph[i][k] & graph[k][j];
                }
            }
        }

        // read query
        while(scanf("%d%d", &A, &B) && A)
        {
            bool flag = false;

            for(int i = 0; i < 26; i++)
            {
                if(graph[A-1][B-1] & (1 << i))
                {
                    printf("%c", (char)'a' + i);
                    flag = true;
                }
            }

            if(!flag) puts("-");
            else      puts("");
        }

        puts("");
    }
}
