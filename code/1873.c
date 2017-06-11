#include <stdio.h>
#include <string.h>
#define MAXL 20

int main()
{
    int C;
    char Raj[MAXL], Sheldon[MAXL];

    scanf( "%d", &C );

    while( C-- )
    {
        scanf( " %s%s", Raj, Sheldon );

        if( strcmp( Raj, "tesoura" ) == 0 )
        {
            if( strcmp( Sheldon, "papel" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "lagarto" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "tesoura" ) == 0 )
                puts( "empate" );
            else
                puts( "sheldon" );
        }
        else if( strcmp( Raj, "papel" ) == 0 )
        {
            if( strcmp( Sheldon, "pedra" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "spock" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "papel" ) == 0 )
                puts( "empate" );
            else
                puts( "sheldon" );
        }
        else if( strcmp( Raj, "pedra" ) == 0 )
        {
            if( strcmp( Sheldon, "lagarto" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "tesoura" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "pedra" ) == 0 )
                puts( "empate" );
            else
                puts( "sheldon" );
        }
        else if( strcmp( Raj, "lagarto" ) == 0 )
        {
            if( strcmp( Sheldon, "spock" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "papel" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "lagarto" ) == 0 )
                puts( "empate" );
            else
                puts( "sheldon" );
        }
        else if( strcmp( Raj, "spock" ) == 0 )
        {
            if( strcmp( Sheldon, "tesoura" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "pedra" ) == 0 )
                puts( "rajesh" );
            else if( strcmp( Sheldon, "spock" ) == 0 )
                puts( "empate" );
            else
                puts( "sheldon" );
        }
    }

    return 0;
}
