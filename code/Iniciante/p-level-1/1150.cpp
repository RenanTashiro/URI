/*
Nome:      Ultrapassando Z
ID:        1150
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   281 Bytes
Submissao: 10/01/15 09:03:31
*/
#include <iostream>
using namespace std;

int main()
{
    int x, z, n = 1, t;
    cin >> x >> z;

        while(z <= x){
        cin >> z;
        }
        t = x++;
    while(x <= z){
        x += t;
        n += 1;
        t++;
    }
    cout << n << endl;
}
