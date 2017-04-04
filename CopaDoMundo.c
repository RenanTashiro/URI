#include <stdio.h>

int main()
{
    int M, N;
    int oitavas[8], quartas[4], semi[2], last;
    int index8 = 0, index4 = 0, index2 = 0;
    int sum8 = 0, sum4 = 0, sum2 = 0;
    unsigned i;

    for( i = 0; i < 15; i++ ){

        scanf( "%d%d", &M, &N );

        if( i < 8 ){
            if( M > N ) oitavas[index8] = sum8 + 1;
            else        oitavas[index8] = sum8 + 2;
            index8++; sum8 += 2;
        }
        else if( i < 12 ){
            if( M > N ) quartas[index4] = oitavas[sum4];
            else        quartas[index4] = oitavas[sum4+1];
            index4++; sum4 += 2;
        }
        else if( i < 14 ){
            if( M > N ) semi[index2] = quartas[sum2];
            else        semi[index2] = quartas[sum2+1];
            index2++; sum2 += 2;
        }
        else{
            if( M > N ) last = semi[0];
            else        last = semi[1];
        }
    }

    printf( "%c\n", last + 64 );

    return 0;
}
