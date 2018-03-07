/*
Nome:      Vivo ou Morto
ID:        2301
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.180s
Tamanho:   970 Bytes
Submissao: 27/10/16 11:05:03
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, R, teste = 1;

    while(scanf("%d%d", &P, &R) && P != 0)
    {
        list<int> children;

        for(int i = 0; i < P; i++)
        {
            int xi;

            scanf("%d", &xi);

            children.push_back(xi);
        }

        for(int i = 0; i < R; i++)
        {
            int N, J, Ai;

            scanf("%d%d", &N, &J);

            list<int>::iterator it = children.begin();
            stack<int> to_remove;

            for(int i = 0; i < N; i++, it++)
            {
                scanf("%d", &Ai);

                if(Ai != J)
                    to_remove.push(*it);
            }

            while(!to_remove.empty()) {
                children.remove(to_remove.top());
                to_remove.pop();
            }
        }

        printf("Teste %d\n", teste++);
        printf("%d\n\n", children.front());
    }
}
