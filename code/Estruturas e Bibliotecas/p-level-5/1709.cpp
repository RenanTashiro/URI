/*
Nome:      Baralho Embaralhado
ID:        1709
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   435 Bytes
Submissao: 14/09/15 20:26:02
*/
#include <cstdio>
using namespace std;

int main()
{
    int P;

    while( scanf( "%d", &P ) != EOF )
    {
        int pos = 1;
        int counter = 0;

        P /= 2;

        do{
            if( pos <= P )
                pos *= 2;
            else
                pos = ( pos - P ) * 2 - 1;
            counter++;
        }while( pos != 1 );

        printf( "%d\n", counter );
    }

    return 0;
}
