/*
Nome:      Coral Perfeito
ID:        1225
Resposta:  Accepted
Linguagem: C++
Tempo:     0.028s
Tamanho:   848 Bytes
Submissao: 23/05/17 18:32:35
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        vector<int> note(N);
        int check = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> note[i];

            check += note[i];
        }

        if(check % N == 0)
        {
            int ans = 0, pivo = check / N;

            for(int i = 0; i < N; i++)
            {
                if(note[i] > pivo)
                {
                    ans += note[i] - pivo;
                }
            }

            cout << ans + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
/*
Input:
5
-100000 -100000 -100000 100000 100000
5
-100000 -100000 -100000 -100000 -100000
5
00000 00000 00000 300000 200000

Output:
240001
1
*/
