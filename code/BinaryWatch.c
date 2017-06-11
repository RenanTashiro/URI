#include <stdio.h>
#define HOURDRAW 4
#define MINUTEDRAW 6

void numberDraw8( int *rise, int val );
void numberDraw32( int *rise, int val );

int main()
{
    int hour, minute;
    char p;

    while( scanf( "%d%c%d", &hour, &p, &minute ) != EOF ){

        int hour_rise[ HOURDRAW ] = {0};
        int minute_rise[ MINUTEDRAW ] = {0};

        numberDraw8( hour_rise, hour );
        numberDraw32( minute_rise, minute );

        puts( " ____________________________________________" );
        puts( "|                                            |" );
        puts( "|    ____________________________________    |_" );
        puts( "|   |                                    |   |_)" );
        puts( "|   |   8         4         2         1  |   |" );
        puts( "|   |                                    |   |" );
      printf( "|   |   %c         %c         %c         %c  |   |\n", hour_rise[0] ? 'o' : ' ', hour_rise[1] ? 'o' : ' ', hour_rise[2] ? 'o' : ' ', hour_rise[3] ? 'o' : ' ' );
        puts( "|   |                                    |   |" );
        puts( "|   |                                    |   |" );
      printf( "|   |   %c     %c     %c     %c     %c     %c  |   |\n", minute_rise[0] ? 'o' : ' ', minute_rise[1] ? 'o' : ' ', minute_rise[2] ? 'o' : ' ', minute_rise[3] ? 'o' : ' ', minute_rise[4] ? 'o' : ' ', minute_rise[5] ? 'o' : ' ' );
        puts( "|   |                                    |   |" );
        puts( "|   |   32    16    8     4     2     1  |   |_" );
        puts( "|   |____________________________________|   |_)" );
        puts( "|                                            |" );
        puts( "|____________________________________________|" );
        puts( "" );

    }

    return 0;
}

void numberDraw8( int *rise, int val ){

    int compare = 8;
    unsigned i;

    for( i = 0; i < HOURDRAW; i++ ){

        if( val - compare >= 0){
            val -= compare;
            rise[i] = 1;
        }

        compare /= 2;
    }
}
void numberDraw32( int *rise, int val ){

    int compare = 32;
    unsigned i;

    for( i = 0; i < MINUTEDRAW; i++ ){

        if( val - compare >= 0 ){
            val -= compare;
            rise[i] = 1;
        }

        compare /= 2;
    }
}
