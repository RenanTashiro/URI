/*
Nome:      O Elfo das Trevas
ID:        1766
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   1,56 KB
Submissao: 21/06/15 15:45:36
*/
#include <stdio.h>
#include <string.h>

struct sleigh{
    char name[100];
    int weight;
    int age;
    float height;
};

typedef struct sleigh Sleigh;

void sort( Sleigh *arr, size_t length )
{
    int i, j;
    Sleigh tmp;

    for( i = 0; i < length; i++ ){
        j = i;
        tmp = arr[j];
        while( arr[j-1].weight < tmp.weight && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( arr[j-1].weight == tmp.weight && arr[j-1].age > tmp.age && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( arr[j-1].weight == tmp.weight && arr[j-1].age == tmp.age && arr[j-1].height > tmp.height && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( arr[j-1].weight == tmp.weight && arr[j-1].age == tmp.age && arr[j-1].height == tmp.height && strcmp( arr[j-1].name, arr[j].name ) > 0 && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }

}

int main()
{
    int T, counter = 1;
    unsigned t;

    scanf( "%d", &T );

    for( t = 0; t < T; t++ ){

        int N, M;
        unsigned i;

        scanf( "%d%d", &N, &M );

        Sleigh reindeer[N];

        for( i = 0; i < N; i++ ){
            scanf( "%s%d%d%f", reindeer[i].name, &reindeer[i].weight, &reindeer[i].age, &reindeer[i].height );
        }

        sort( reindeer, N );

        printf( "CENARIO {%d}\n", counter++ );
        for( i = 0; i < M; i++ ){ printf( "%d - %s\n", i + 1, reindeer[i].name ); }

    }

    return 0;
}