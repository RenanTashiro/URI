/*
Nome:      Exame Geral
ID:        2534
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   428 Bytes
Submissao: 09/05/17 16:55:31
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;

    while(cin >> N >> Q)
    {
        vector<int> score(N);

        for(int i = 0; i < N; i++)
        {
            cin >> score[i];
        }

        sort(score.rbegin(), score.rend());

        while(Q--)
        {
            int id;

            cin >> id;

            cout << score[id-1] << endl;
        }
    }
}
