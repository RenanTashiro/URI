/*
Nome:      Colisão
ID:        1618
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   455 Bytes
Submissao: 04/02/15 08:12:25
*/
#include <iostream>
using namespace std;

int main()
{
    int N, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;

        if ((Rx >= Ax && Rx >= Dx) && (Rx <= Bx && Rx <= Cx)
            &&(Ry >= Ay && Ry >= By) && (Ry <= Cy && Ry <= Dy))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
