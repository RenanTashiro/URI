/*
Nome:      Divisibilidade Por 3
ID:        1987
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   438 Bytes
Submissao: 26/11/15 18:16:58
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string n;

    while(cin >> N) {
        cin >> n;

        int len = (int) n.size(), ans = 0;

        for(int i = 0; i < len; i++) {
            ans += n[i];
        }

        ans -= (48 * len);

        if(ans % 3 == 0) {
            cout << ans << " sim\n";
        } else {
            cout << ans << " nao\n";
        }
    }
}
