/*
Nome:      Sequências de Granizo
ID:        1441
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   399 Bytes
Submissao: 11/03/15 08:27:23
*/
#include <iostream>
using namespace std;

int main()
{
    int H, highest;

    while(cin >> H && H != 0){

    highest = H;

        while(H != 1){

            if(H % 2 == 0)
                H = H / 2;
            else
                H = 3 * H + 1;

        if(H > highest)
            highest = H;
        }
        cout << highest << endl;
        highest = 0;
    }
}
