/*
Nome:      Notas da Prova
ID:        2344
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   408 Bytes
Submissao: 23/04/17 10:37:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    if(N == 0)
    {
        cout << "E" << endl;
    }
    else if(N < 36)
    {
        cout << "D" << endl;
    }
    else if(N < 61)
    {
        cout << "C" << endl;
    }
    else if(N < 86)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }
}
