/*
Nome:      Shuffle
ID:        1770
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   814 Bytes
Submissao: 28/06/15 20:30:52
*/
#include <iostream>
using namespace std;

int main()
{
    int M, K, t_played = 0;
    long long t_minutes = 0;

    while( cin >> M >> K ){

        int m[M];
        bool yes[100] = {false};

        for( int i = 0; i < M; i++ ){
            cin >> m[i];
        }

        int playlist;

        for( int i = 0; i < K; i++ ){
            cin >> playlist;

            if( t_played != M ){
                t_minutes += m[playlist-1];
            }

            if( !yes[playlist-1] ){
                yes[playlist-1] = true;
                t_played++;
            }
        }
        if( t_played == M ){
            cout << t_minutes << endl;
        }
        else{
            cout << -1 << endl;
        }

        t_minutes = t_played = 0;
    }

    return 0;
}
