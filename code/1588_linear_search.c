#include <stdio.h>
#include <string.h>

struct football{
    char name[21];
    int pts;
    int gol;
    int win;
};

typedef struct football Football;

void AccordingToTheRules( Football *, size_t );

int main()
{
    int T, N, M;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        scanf( "%d%d", &N, &M );

        Football team[N];
        unsigned j, k;

        for( j = 0; j < N; j++ ){
            scanf( "%20s", team[j].name );
            team[j].pts = team[j].gol = team[j].win = 0;
        }

        int teamA_score, teamB_score, index_A, index_B;
        char teamA_name[21], teamB_name[21];

        for( j = 0; j < M; j++ ){
            scanf( "%d%20s%d%20s", &teamA_score, teamA_name, &teamB_score, teamB_name );

            for( k = 0; k < N; k++ ) if( strcmp( teamA_name, team[k].name ) == 0 ) { index_A = k; }
            for( k = 0; k < N; k++ ) if( strcmp( teamB_name, team[k].name ) == 0 ) { index_B = k; }

            if( teamA_score > teamB_score ){
                team[index_A].pts += 3;
                team[index_A].gol += teamA_score;
                team[index_A].win++;
                team[index_B].gol += teamB_score;
            }
            else if( teamA_score < teamB_score ){
                team[index_B].pts += 3;
                team[index_B].gol += teamB_score;
                team[index_B].win++;
                team[index_A].gol += teamA_score;
            }
            else{
                team[index_A].pts += 1;
                team[index_B].pts += 1;
                team[index_A].gol += teamA_score;
                team[index_B].gol += teamB_score;
            }
        }

        AccordingToTheRules( team, N );

        for( j = 0; j < N; j++ ){
            printf( "%s\n", team[j].name );
        }

    }

    return 0;
}

void AccordingToTheRules( Football *arry, size_t length )
{
    int i, j;
    Football tmp;

    for( i = 1; i < length; i++ ){
        j = i;
        tmp = arry[j];
        while( tmp.pts > arry[j-1].pts && j > 0 ){
            arry[j] = arry[j-1];
            j--;
        }
        while( tmp.pts == arry[j-1].pts && tmp.win > arry[j-1].win && j > 0 ){
            arry[j] = arry[j-1];
            j--;
        }
        while( tmp.pts == arry[j-1].pts && tmp.gol > arry[j-1].gol && j > 0 ){
            arry[j] = arry[j-1];
            j--;
        }
        arry[j] = tmp;
    }
}
