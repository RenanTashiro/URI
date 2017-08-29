/*
Nome:      Tempo de Jogo com Minutos
ID:        1047
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   664 Bytes
Submissao: 06/01/15 19:32:26
*/
#include <iostream>
using namespace std;

int main()
{
    int ih, im, fh, fm, th, tm;
    cin >> ih >> im >> fh >> fm;

    if(ih > fh)
    {
        th = ((24 - ih + fh) * 60 - im + fm)  / 60;
        tm = ((24 - ih + fh) * 60 - im + fm)  % 60;
    }
    if(ih < fh)
    {
        th = ((fh - ih) * 60 - im + fm) / 60;
        tm = ((fh - ih) * 60 - im + fm) % 60;
    }
    if(ih == fh && im < fm) // 7 33 7 32
    {
        th = 0;
        tm = fm - im;
    }
    if(ih == fh && im > fm)
    {
        th = 23;
        tm = 60 - (im - fm);
    }

cout << "O JOGO DUROU " << th << " HORA(S) E " << tm << " MINUTO(S)" << endl;

}
