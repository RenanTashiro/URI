/*
Nome:      Jetiqui
ID:        2587
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   665 Bytes
Submissao: 14/06/17 19:54:13
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C;

    cin >> C;

    for(int i = 0; i < C; i++)
    {
        string a, b, c;
        int pos1 = -1, pos2 = -1;

        cin >> a >> b >> c;

        for(int i = 0; c[i] != '\0'; i++)
        {
            if(c[i] == '_')
            {
                if(pos1 == -1)
                {
                    pos1 = i;
                }
                else
                {
                    pos2 = i;
                    break;
                }
            }
        }

        cout << (a[pos1] == b[pos2] || a[pos2] == b[pos1] ? "Y" : "N") << endl;
    }
}
