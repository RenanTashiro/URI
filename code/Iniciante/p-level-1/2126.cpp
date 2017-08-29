/*
Nome:      Procurando Subsequências
ID:        2126
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   850 Bytes
Submissao: 12/07/16 17:57:49
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    int caso = 1;

    while(cin >> a >> b)
    {
        int pos = 0, counter = 0;

        for(int i = 0; i < (int)(b.size() - a.size()) + 1; i++)
        {
            int j;

            for(j = 0; j < (int)a.size(); j++)
            {
                if(a[j] != b[i+j])
                {
                    break;
                }
            }

            if(j == (int)a.size())
            {
                counter++;
                pos = i;
            }
        }

        printf("Caso #%d:\n", caso++);
        if(counter) {
            printf("Qtd.Subsequencias: %d\n", counter);
            printf("Pos: %d\n", pos+1);
        }
        else
            puts("Nao existe subsequencia");
        puts("");
    }
}
