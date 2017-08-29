/*
Nome:      Prefácio
ID:        1837
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   408 Bytes
Submissao: 28/07/15 22:10:16
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,r;
    double q;
    cin >> a >> b;;
    if (a>=0)
        q=a/b;
    else{
        q=(float)a/b;

        if (b<0)
            q=ceil(q); // arredondamento pra cima
        else
            q=floor(q); // arredondamento pra baixo
    }
    r=a-b*q;
    cout << q <<" "<< r << endl;
    return 0;
}
