/*
Nome:      Bactéria I
ID:        2356
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   318 Bytes
Submissao: 21/04/17 10:07:01
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char D[101], S[101];

    while(cin >> D >> S)
    {
        if(strstr(D, S) != NULL)
        {
            cout << "Resistente" << endl;
        }
        else
        {
            cout << "Nao resistente" << endl;
        }
    }
}
