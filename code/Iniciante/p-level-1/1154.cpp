/*
Nome:      Idades
ID:        1154
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   334 Bytes
Submissao: 10/01/15 09:11:19
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x, n = 0, t = 0;
    float media;

    while(x > - 1){

    cin >> x;

        if(x > 0){
        t += x;
        n++;
        }
    }
    media = t / n;
    cout << setiosflags(ios::fixed) << setprecision(2) << media << endl;
}
