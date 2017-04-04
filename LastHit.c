#include <stdio.h>

int main()
{
    int T;
    int At, Ad, Bt, Bd;
    int H;

    scanf( "%d", &T );
    unsigned i;

    for( i = 0; i < T; i++){

        scanf( "%d%d%d%d", &At, &Ad, &Bt, &Bd );
        scanf( "%d", &H );

        int tempAd = 0;
        int tempBd = 0;

        while( H > 0 ){

            if( tempAd == 0){
                H -= At;

                if( H < 1 ){
                    puts( "Andre" );
                    break;
                }
            }
            if( tempBd == 0){
                H -= Bt;

                if( H < 1 ){
                    puts( "Beto" );
                    break;
                }
            }

            tempAd++;
            tempBd++;

            if( tempAd == Ad )
                tempAd = 0;
            if( tempBd == Bd )
                tempBd = 0;
        }
    }
    return 0;
}
