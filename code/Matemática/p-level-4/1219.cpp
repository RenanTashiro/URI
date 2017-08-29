/*
Nome:      Flores Coloridas
ID:        1219
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   709 Bytes
Submissao: 18/05/17 19:36:44
*/
#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897

int main()
{
    double a, b, c;

    while(cin >> a >> b >> c)
    {
        long double p = (a + b + c) / 2.0;
        long double k = (1 / 2.0) * (a + b + c);
        long double radius = (a * b * c) / (sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
        long double t_area = sqrt(p * (p - a) * (p - b) * (p - c));
        long double i_radius = t_area / k;
        long double oc_area = radius * radius * PI;
        long double ic_area  = i_radius * i_radius * PI;

        cout << fixed << setprecision(4) << oc_area - t_area << ' ' << t_area - ic_area << ' ' << ic_area << endl;
    }
}
