/*
Nome:      Triangulação de Delaunay
ID:        1620
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   271 Bytes
Submissao: 16/02/15 08:42:12
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double L, X, l;

    while(cin >> L && L != 0){

    l = 2 * L - 3;

        X = (l - L) / L;

        cout << setiosflags(ios::fixed) << setprecision(6) << X << endl;
    }
}
