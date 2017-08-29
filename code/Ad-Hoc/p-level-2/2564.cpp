/*
Nome:      Troca ou Não Troca
ID:        2564
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   541 Bytes
Submissao: 14/05/17 17:38:13
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int c = 0, act = 1;

        for(int i = 1; i < N; i++)
        {
            int P, R;

            cin >> P >> R;

            if(P == N && R == 0)
            {
                c++;
            }
            else if(act == N && R == 1) {
                c++;
            }

            if(P == N)
            {
                act = N;
            }

        }

        cout << c << endl;
    }
}
