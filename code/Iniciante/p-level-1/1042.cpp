/*
Nome:      Sort Simples
ID:        1042
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   655 Bytes
Submissao: 06/01/15 14:52:45
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a > b && a > c && b > c)
        cout << c << endl << b << endl << a;
    if(a > b && a > c && b < c)
        cout << b << endl << c << endl << a;
    if(b > a && b > c && a > c)
        cout << c << endl << a << endl << b;
    if(b > a && b > c && a < c)
        cout << a << endl << c << endl << b;
    if(c > a && c > b && a > b)
         cout << b << endl << a << endl << c;
    if(c > a && c > b && a < b)
        cout << a << endl << b << endl << c;

    cout << endl << endl << a << endl << b << endl << c << endl;

}
