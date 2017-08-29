/*
Nome:      Sequência S II
ID:        1156
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   326 Bytes
Submissao: 13/01/15 18:15:20
*/
#include <iostream>
#include <iomanip>
 
 
using namespace std;
 
int main()
{
    double s, i, c, b, g;
    s=1;
    c=1;
    b=1;
    g=1;
 
    while(c<=39)
    {
        c = c+2;
        b = g*2;
        s=s+(c/b);
        g = b;

    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
}