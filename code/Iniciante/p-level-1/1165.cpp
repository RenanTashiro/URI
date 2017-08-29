/*
Nome:      Número Primo
ID:        1165
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   652 Bytes
Submissao: 27/04/15 16:16:40
*/
#include <iostream>
using namespace std;

int main()
{
    int N, X, contador, total;

    cin >> N;

    for( int i = 0; i < N; i++ ){

        cin >> X;

        contador = 3;
        total = 1;

        if( X > 2 && X % 2 == 0){
            total = 0;
        }
        else{
            while( contador < X / 2 ){

                if(X % contador == 0){
                    total = 0;
                }

                contador += 2;
            }
        }

        if( total )
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
    }
    return 0;
}
