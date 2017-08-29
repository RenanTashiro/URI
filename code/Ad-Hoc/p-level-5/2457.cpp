/*
Nome:      Letras
ID:        2457
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   380 Bytes
Submissao: 28/04/17 16:49:04
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word, c;
    int n_word = 0, n_matches = 0;

    cin >> c;

    while(cin >> word)
    {
        n_word++;

        if(word.find(c) != string::npos)
        {
            n_matches++;
        }
    }

    cout << fixed << setprecision(1) << (double)n_matches / n_word * 100.0 << endl;
}
