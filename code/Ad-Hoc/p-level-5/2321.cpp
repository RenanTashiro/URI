/*
Nome:      Detectando Colisões
ID:        2321
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   795 Bytes
Submissao: 23/04/17 09:38:33
*/
#include <bits/stdc++.h>
using namespace std;

bool rec_colision(int x0, int y0, int x1, int y1, int a0, int b0, int a1, int b1)
{
    return (a0 >= x0 && b0 >= y0 && a1 <= x1 && b1 <= y1) || // OK
           (a1 >= x0 && b1 >= y0 && a0 <= x1 && b0 <= y1) ||
           (a0 <= x1 && b0 <= y1 && a1 >= x0 && b1 >= y0) ||
           (a1 >= x0 && b0 <= y1 && a0 <= x1 && b1 >= y0) ||
           (a0 <= x1 && b1 >= y0 && a1 >= x0 && b1 <= y1);
}

int main()
{
    int x0, y0, x1, y1;
    int a0, b0, a1, b1;

    cin >> x0 >> y0 >> x1 >> y1;
    cin >> a0 >> b0 >> a1 >> b1;

    if(rec_colision(x0, y0, x1, y1, a0, b0, a1, b1) || rec_colision(a0, b0, a1, b1, x0, y0, x1, y1))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
