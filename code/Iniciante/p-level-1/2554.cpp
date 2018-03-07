/*
Nome:      Pizza Antes de BH
ID:        2554
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   713 Bytes
Submissao: 09/05/17 17:19:26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;

    while(cin >> N >> D)
    {
        bool yes = false;

        for(int i = 0; i < D; i++)
        {
            int dd, mm, yyyy;

            scanf("%d/%d/%d", &dd, &mm, &yyyy);

            bool ok = true;

            for(int j = 0; j < N; j++)
            {
                int p;

                cin >> p;

                ok &= p;
            }

            if(!yes && ok)
            {
                printf("%d/%d/%d\n", dd, mm, yyyy);
                yes = true;
            }
        }

        if(!yes)
        {
            cout << "Pizza antes de FdI" << endl;
        }
    }
}
