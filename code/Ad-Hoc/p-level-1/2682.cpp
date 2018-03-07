/*
Nome:      Detector de Falhas
ID:        2682
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   291 Bytes
Submissao: 19/09/17 08:01:23
*/
#include <iostream>

using namespace std;

int main()
{
    int x, prev = 0;
    bool over = false;

    while(cin >> x)
    {
        if(x <= prev)
            over = true;

        if(!over)
            prev = x;
    }

    cout << prev + 1 << endl;

    return 0;
}
