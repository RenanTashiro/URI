/*
Nome:      Do Lado Escuro do Código
ID:        2487
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   800 Bytes
Submissao: 18/05/17 14:52:16
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, A;

    while(cin >> T >> A)
    {
        vector<long long int> ans(A);
        long long int idx = 0, oA = A;

        while(T != 0 && A != 0)
        {
            long long int exp = (long long int)log2(T);
            long long int value = (long long int)pow(2, exp);

            while(T - value < A - 1)
            {
                value = (long long int)pow(2, --exp);
            }

            T -= value;
            A--;
            ans[idx++] = value;
        }

        if(T != 0) ans[0] += T;

        cout << ans[0];

        for(long long int i = 1; i < oA; i++)
        {
            cout << ' ' << ans[i]            ;
        }

        cout << endl;
    }
}
