/*
Nome:      Six Flags
ID:        1487
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,39 KB
Submissao: 12/06/15 13:47:32
*/
#include <iostream>
#include <cstdlib>
using namespace std;

struct ride{
    int time;
    int score;
    double s_c;
};

typedef struct ride Ride;

int compare( const void *a, const void *b ){
    Ride *compareA = ( Ride* )a;
    Ride *compareB = ( Ride* )b;
    return( compareA->s_c < compareB->s_c );
}

int main()
{
    int N, T, total_score = 0;
    unsigned counter = 1;

    while( cin >> N >> T && N != 0 ){

        Ride student[N];

        for( int i = 0; i < N; i++ ){
            cin >> student[i].time >> student[i].score;
            student[i].s_c = ( double ) student[i].score / student[i].time;
        }

        qsort( student, N, sizeof( Ride ), compare );

        int index;

        for( int i = 0; i < N; i++ ){
            if( T >= student[i].time ){
                total_score += ( T / student[i].time ) * student[i].score;
                T %= student[i].time;
                index = i;
            }
        }

        if( index < N - 1 && T > 0 ){
            if( student[index+1].score * 2 > student[index].score )
                if( T + student[index].time <= student[index+1].time * 2 )
                    total_score = total_score - student[index].score + student[index+1].score * 2;
        }

        cout << "Instancia "<< counter <<"\n" <<  total_score << endl << endl;
        total_score = 0;
        counter++;
    }
}
