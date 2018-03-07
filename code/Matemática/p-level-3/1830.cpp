/*
Nome:      Caixas de Bombons
ID:        1830
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   1.011 Bytes
Submissao: 14/09/17 12:53:37
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, z;
    int test = 1;

    while(cin >> x >> y >> z)
    {
        if(x == 0 && y == 0 && z == 0)
            break;

        double s = 2 * (z + x - y);
        double p = 2 * (y - 5*x - 0.25*s);
        double e = (x - 0.05*p - 0.05*s) / 0.15;

        printf("Caso #%d: %d Especial, %d Predileta e %d Sortida\n", test++, (int)round(e), (int)round(p), (int)round(s));
    }
}
/**
(1)0.15*E+0.05*P+0.05*S=X
(2)0.75*E+0.75*P+0.50*S=Y
(3)0.60*E+0.70*P+0.95*S=Z

(3)-4*(1)=(4)
0.60*E+0.70*P+0.95*S=Z
0.60*E+0.20*P+0.20*S=4*X
=0.50*P+0.75*S=Z-4*X

(2)-5*(1)=(5)
0.75*E+0.75*P+0.50*S=Y
0.75*E+0.25*P+0.25*S=5*X
=0.50*P+0.25*S=Y-5*X

(4)-(5)=(6)
0.50*P+0.75*S=Z-4*X
0.50*P+0.25*S=Y-5*X
=0.50*S=Z-4*X-(Y-5*X)
=0.50*S=Z+X-Y
=S=2*(Z+X-Y)

=>

=0.50*P+0.25*S=Y-5*X
=0.50*P=Y-5*X-0.25*S
=P=2*(Y-5*X-0.25*S)

=>

=0.15*E+0.05*P+0.05*S=X
=0.15*E=X-0.05*P-0.05*S
=E=(X-0.05*P-0.05*S)/0.15

*/
