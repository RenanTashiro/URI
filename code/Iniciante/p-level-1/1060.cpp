/*
Nome:      Números Positivos
ID:        1060
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   600 Bytes
Submissao: 06/01/15 20:37:14
*/
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, t, a1, b1, c1, d1, e1, f1;
    cin >> a >> b >> c >> d >> e >> f;

    if(a > 0)
        a1 = 1;
    else
        a1 = 0;
    if(b > 0)
        b1 = 1;
    else
        b1 = 0;
    if(c > 0)
        c1 = 1;
    else
        c1 = 0;
    if(d > 0)
        d1 = 1;
    else
        d1 = 0;
    if(e > 0)
        e1 = 1;
    else
        e1 = 0;
    if(f > 0)
        f1 = 1;
    else
        f1 = 0;

    t = a1 + b1 + c1+ d1+ e1 +f1;
    cout << t << " valores positivos" << endl;
}
