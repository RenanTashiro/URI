/*
Nome:      Lista Telefônica Econômica
ID:        1211
Resposta:  Accepted
Linguagem: C
Tempo:     0.072s
Tamanho:   1,01 KB
Submissao: 08/06/15 09:34:50
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phoneBook{
    char number[201];
};

typedef struct phoneBook PhoneBook;

int compare( const void *a, const void *b ){
    PhoneBook *compareA = ( PhoneBook* )a;
    PhoneBook *compareB = ( PhoneBook* )b;
    return( strcmp( compareA->number, compareB->number ) );
}

int main()
{
    int N, counter = 0;

    while( scanf( "%d ", &N ) != EOF ){

        PhoneBook phone[N];
        unsigned i, j, size;

        for( i = 0; i < N; i++ ){
            scanf( "%200s", phone[i].number );
        }

        size = strlen( phone[0].number );

        qsort( phone, N, sizeof( PhoneBook ), compare );

        for( i = 1; i < N; i++ ){
            for( j = 0; j < size; j++ ){
                if( phone[i].number[j] == phone[i-1].number[j] )
                    counter++;
                else
                    break;
            }
        }

        printf( "%d\n", counter );
        counter = 0;
    }

    return 0;
}
