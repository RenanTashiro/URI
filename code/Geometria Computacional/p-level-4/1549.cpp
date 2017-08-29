/*
Nome:      Dividindo a Coca
ID:        1549
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   1,06 KB
Submissao: 05/06/17 13:16:31
*/
#include <bits/stdc++.h>
using namespace std;

# define PI 3.14159265358979323846

double volume(double h, double r, double tan)
{
    double R = r + tan * h;

    return ((PI * h) / 3.0) * (R * R + R * r + r * r);
}

double bsearch(double key, double h, double R, double r)
{
    double  tan = ((R - r) / h), first = 0.0, last = h, actual = (first + last) / 2.0, value = volume(actual, r, tan);
    int c = 0;

    while(value != key && c++ < 100)
    {
        if(value == key)
        {
            return value;
        }
        else if(value > key)
        {
            last = actual;
        }
        else
        {
            first = actual;
        }

        actual = (first + last) / 2.0;
        value = volume(actual, r, tan);
    }

    return actual;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int C;

    cin >> C;

    while(C--)
    {
        double N, L, b, B, H;

        cin >> N >> L >> b >> B >> H;

        cout << fixed << setprecision(2) << bsearch(L / N, H, B, b) << "\n";
    }
}
