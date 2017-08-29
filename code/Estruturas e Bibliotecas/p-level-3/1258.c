/*
Nome:      Camisetas
ID:        1258
Resposta:  Accepted
Linguagem: C
Tempo:     0.020s
Tamanho:   1,36 KB
Submissao: 01/07/15 07:51:35
*/
#include <stdio.h>
#include <string.h>

struct t_Shirt{
    char name[300];
    char color[12];
    char size;
};

typedef struct t_Shirt T_Shirt;

void Sort( T_Shirt *, size_t );

int main()
{
    int N;
    unsigned i = 0;

    while( scanf( "%d", &N ) && N != 0 ){

        if( i > 0 ) puts( "" );

        T_Shirt students[N];

        for( i = 0; i < N; i++ ){
            scanf( " %[^\n]", students[i].name );
            scanf( "%s %c", students[i].color, &students[i].size );
        }

        Sort( students, N );

        for( i = 0; i < N; i++ ){
            printf( "%s %c %s\n", students[i].color, students[i].size, students[i].name );
        }
    }

    return 0;
}

void Sort( T_Shirt *arr, size_t len )
{
    T_Shirt tmp;
    int i, j;

    for( i = 0; i < len; i++ ){
        j = i;
        tmp = arr[j];
        while( strcmp( tmp.color, arr[j-1].color ) < 0 && j > 0){
            arr[j] = arr[j-1];
            j--;
        }
        while( tmp.size > arr[j-1].size && strcmp( tmp.color, arr[j-1].color  ) == 0 && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( strcmp( tmp.name, arr[j-1].name ) < 0 && tmp.size == arr[j-1].size && strcmp( tmp.color, arr[j-1].color ) == 0 && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }
}
