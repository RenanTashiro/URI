/*
Nome:      Futebol
ID:        1495
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.328s
Tamanho:   1,13 KB
Submissao: 23/06/15 08:59:46
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int compare( const void*a, const void *b )
{
    return( *( int* )a - *( int* )b );
}

int main()
{
    int N, G, R, S, vitoria = 0, empate = 0, der = 0, pts = 0, cont = 0;

    while(cin >> N >> G){

    int derrota[N];

        for(int i = 0; i < N; i++){

            cin >> S >> R;

            if(S > R)
                vitoria++;
            else if(S == R)
                empate++;
            else{
                derrota[der] = R - S;
                der++;
            }
        }

        pts = vitoria * 3 + empate;

        for(; G > 0 && empate > 0; G--){
            pts += 2;
            empate--;
        }
        if(G > 0){

        qsort( derrota, der, sizeof( int ), compare );

        while(G > 0 && cont < der){
            G -= derrota[cont];
            cont++;
            if(G - 1 >= 0){
                pts += 3;
                G--;
            }
            else if(G >= 0)
                pts += 1;
            }
        }
        cout << pts << endl;
        vitoria = empate = der = pts = cont = 0;
    }
}