#include <stdio.h>
#include <stdbool.h>

int binarySearch( const int arry_key[], const int arry_search[], size_t size_key, size_t size_search );

int main()
{
    int Alice, Betty;
    unsigned maxCards_A, maxCards_B;

    while( scanf( "%d%d", &Alice, &Betty ) && Alice != 0 ){

        int AliceCards[Alice], BettyCards[Betty];
        size_t i;

        for( i = 0; i < Alice; i++ ){
            scanf( "%d", &AliceCards[i] );
        }

        for( i = 0; i < Betty; i++ ){
            scanf( "%d", &BettyCards[i] );
        }

        maxCards_A = binarySearch( AliceCards, BettyCards, Alice ,Betty );
        maxCards_B = binarySearch( BettyCards, AliceCards, Betty, Alice);

        if( maxCards_A <= maxCards_B )
            printf( "%d", maxCards_A );
        else
            printf( "%d", maxCards_B );

        puts( "" );
    }
    return 0;
}

int binarySearch( const int arry_key[], const int arry_search[], size_t size_key, size_t size_search ){

    int middle, min, max;

    unsigned maxCards = 0;
    unsigned i;

    bool compareORnot[100005] = {0};
    bool add = true;

    for( i = 0; i < size_key; i++ ){

        min = 0;
        max = size_search - 1;

        if( !compareORnot[ arry_key[i] ] ){

            while( min <= max ){

                middle = ( min + max ) / 2;

                if( arry_key[i] == arry_search[middle] ){
                    add = false;
                    break;
                }

                else if( arry_key[i] < arry_search[middle] ){
                    max = middle - 1;
                }

                else{
                    min = middle + 1;
                }
            }
            if( add ){
                maxCards++;
            }
            else{
                add = true;
            }
        }
        compareORnot[ arry_key[i] ] = true;
    }
    return maxCards;
}
