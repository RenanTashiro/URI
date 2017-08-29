/*
Nome:      Fonte dos Desejos
ID:        1920
Resposta:  Accepted
Linguagem: C++
Tempo:     0.028s
Tamanho:   1,61 KB
Submissao: 09/09/15 18:45:13
*/
#include <iostream>
#include <cmath>
using namespace std;

typedef struct{
    int dentro, borda;
}Pts;

int ondeCaiu( int Cx, int Cy, int R1, int R2, int X, int Y )
{
    double dist = hypot( ( double ) Cx - X, ( double ) Cy - Y );

    if( dist < R1 )
        return 1;
    else if(  dist >= R1 && dist <= R2 )
        return 2;
    return -1;
}

int main()
{
    int N;
    int CX, CY, R1, R2;

    while( cin >> N && N != 0 )
    {
        cin >> CX >> CY >> R1 >> R2;

        Pts chiquinha, popis;

        chiquinha.dentro = chiquinha.borda = popis.dentro = popis.borda = 0;

        for( int i = 1; i <= N * 2; i++ )
        {
            int X, Y;

            cin >> X >> Y;

            if( i & 1 )
            {
                int flag = ondeCaiu( CX, CY, R1, R2, X, Y );

                if( flag == 1 )
                    chiquinha.dentro++;
                else if( flag == 2)
                    chiquinha.borda++;
            }
            else
            {
                int flag = ondeCaiu( CX, CY, R1, R2, X, Y );

                if( flag == 1 )
                    popis.dentro++;
                else if( flag == 2)
                    popis.borda++;
            }
        }

        if( chiquinha.dentro > popis.dentro )
            cout << "C > P\n";
        else if( chiquinha.dentro < popis.dentro )
            cout << "P > C\n";
        else if( chiquinha.borda > popis.borda )
            cout << "C > P\n";
        else if( chiquinha.borda < popis.borda )
            cout << "P > C\n";
        else
            cout << "C = P\n";
    }
}
