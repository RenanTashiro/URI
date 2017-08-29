/*
Nome:      Flecha no Coelho
ID:        2489
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   248 Bytes
Submissao: 28/04/17 15:11:20
*/
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main()
{
    double A, D, R;

    while(cin >> A >> D >> R)
    {
        cout << fixed << setprecision(4) << A + tan((R-90) * PI / 180.0) * D << endl;
    }
}
