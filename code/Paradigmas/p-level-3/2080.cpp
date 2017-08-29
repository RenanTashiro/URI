/*
Nome:      Seqüências de Röntgen
ID:        2080
Resposta:  Accepted
Linguagem: C++
Tempo:     0.120s
Tamanho:   1,31 KB
Submissao: 12/08/17 17:53:21
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int T;

    cin >> T;

    for(int k = 0; k < T; k++)
    {
        if(k != 0)
            cout << endl;

        string seq[2];
        int K;

        cin >> seq[0] >> K;

        cout << seq[0] << endl;

        for(int i = 0; i < K; i++)
        {
            seq[(i+1)%2] = "";
            char digit = seq[i%2][0];
            int n = 0;

            seq[i%2] += '#';

            for(int j = 0; seq[i%2][j]; j++)
            {
                if(digit != seq[i%2][j]) {
                    if(i == 0) {
                        string tmp = "";
                        while(n) tmp += char((n % 10) + '0'), n /= 10;
                        reverse(tmp.begin(), tmp.end());
                        seq[(i+1)%2] += tmp;
                        seq[(i+1)%2] += digit;
                        digit = seq[i%2][j];
                        n = 0;
                    } else {
                        seq[(i+1)%2] += char(n + '0');
                        seq[(i+1)%2] += digit;
                        digit = seq[i%2][j];
                        n = 0;
                    }
                }

                n++;
            }

            cout << seq[(i+1)%2] << endl;
        }
    }
}
