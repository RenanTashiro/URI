#include <stdio.h>
#include <string.h>

int main()
{
    int T, counter = 1;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        char sheldon[10], raj[10];

        scanf( "%s%s", sheldon, raj );

        printf( "Caso #%d: ", counter++ );

        if( strcmp( sheldon, raj ) == 0 ){
            puts( "De novo!" );
        }
        else if( strcmp( sheldon, "tesoura" ) == 0 ){
            if( strcmp( raj, "papel" ) == 0 || strcmp( raj, "lagarto" ) == 0 ){
                puts( "Bazinga!" );
            }
            else{
                puts( "Raj trapaceou!" );
            }
        }
        else if( strcmp( sheldon, "papel" ) == 0 ){
            if( strcmp( raj, "pedra" ) == 0 || strcmp( raj, "Spock" ) == 0 ){
                puts( "Bazinga!" );
            }
            else{
                puts( "Raj trapaceou!" );
            }
        }
        else if( strcmp( sheldon, "pedra" ) == 0 ){
            if( strcmp( raj, "lagarto" ) == 0 || strcmp( raj, "tesoura" ) == 0 ){
                puts( "Bazinga!" );
            }
            else{
                puts( "Raj trapaceou!" );
            }
        }
        else if( strcmp( sheldon, "lagarto" ) == 0 ){
            if( strcmp( raj, "Spock" ) == 0 || strcmp( raj, "papel" ) == 0 ){
                puts( "Bazinga!" );
            }
            else{
                puts( "Raj trapaceou!" );
            }
        }
        else if( strcmp( sheldon, "Spock" ) == 0 ){
            if( strcmp( raj, "pedra" ) == 0 || strcmp( raj, "tesoura" ) == 0 ){
                puts( "Bazinga!" );
            }
            else{
                puts( "Raj trapaceou!" );
            }
        }
    }


    return 0;
}
