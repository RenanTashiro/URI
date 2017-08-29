/*
Nome:      Branco e Preto
ID:        1997
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   764 Bytes
Submissao: 28/11/15 14:40:18
*/
#include <bits/stdc++.h>

using namespace std;

// Trivial thought don't work in this case
int main()
{
    string str_01, str_02;

    while(cin >> str_01 >> str_02) {
        if(str_01.compare("*") == 0 && str_02 == str_01 ) {
            break;
        }

        int ans = 0, len = (int) str_01.size();
        bool diff = false;

        for(int i = 0; i < len; i++) {
            if(str_01[i] == str_02[i]) {
                if(diff) {
                    ans++;
                    diff = false;
                }
            } else {
                diff = true;
            }
        }

        // Case everything is different
        if(diff == true) {
            ans++;
        }

        cout << ans << "\n";
    }
}