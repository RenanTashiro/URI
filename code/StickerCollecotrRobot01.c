#include <stdio.h>

int main()
{
    int N, M, S;

    while( scanf( "%d%d%d", &N, &M, &S ) && N != 0 ){

        int robotX, robotY, robotPts = 0;
        char orientation;
        char arena[N][M];

        int i, j;
        //Constroi a Arena
        for( i = 0; i < N; i++ ){

            for( j = 0; j < M; j++ ){

                scanf( "%c", &arena[i][j] );
                //Verifica a possivel posicao do robo
                if( arena[i][j] != '.' && arena[i][j] != '*' && arena[i][j] != '#' ){
                    robotX = i;
                    robotY = j;
                    orientation = arena[i][j];
                }
            }
        }
        for( j = 0; j < N; j++ )
            for( i = 0; i < M; i++ )
                printf( "%c", arena[j][i] );

        //Le as instrucoes
        char instructions[S];
        scanf( "%s", instructions );

        //Executa as instrucoes
        for( i = 0; i < S; i++ ){

            switch( instructions[i] ){

            case 'D':
                if( orientation == 'N' ){
                    orientation = 'L';
                }
                else if( orientation == 'L' ){
                    orientation = 'S';
                }
                else if( orientation == 'S' ){
                    orientation = 'O';
                }
                else{
                    orientation = 'N';
                }break;

            case 'E':
                if( orientation == 'N' ){
                    orientation = 'O';
                }
                else if( orientation == 'O' ){
                    orientation = 'S';
                }
                else if( orientation == 'S' ){
                    orientation = 'L';
                }
                else{
                    orientation = 'N';
                }break;


            case 'F':
                if( orientation == 'N' && arena[ robotX - 1 ][ robotY ] != '#'  && robotX >= 0 ){
                    robotX--;

                    if( arena[ robotX ][ robotY ] == '*' ){
                        robotPts++;
                        arena[ robotX - 1 ][ robotY ] = '.';
                    }

                }
                else if( orientation == 'L' && arena[ robotX ][ robotY + 1] != '#'  && robotY < M ){
                    robotY++;

                    if( arena[ robotX ][ robotY ] == '*' ){
                        robotPts++;
                        arena[ robotX - 1 ][ robotY ] = '.';
                    }
                }
                else if( orientation == 'S' && arena[ robotX + 1 ][ robotY ] != '#'  && robotY < N ){
                    robotX++;

                    if( arena[ robotX ][ robotY ] == '*' ){
                        robotPts++;
                        arena[ robotX - 1 ][ robotY ] = '.';
                    }
                }
                else if( arena[ robotX ][ robotY - 1] != '#'  && robotY >=0 ){
                    robotY--;

                    if( arena[ robotX ][ robotY ] == '*' ){
                        robotPts++;
                        arena[ robotX - 1 ][ robotY ] = '.';
                    }
                }break;
            }
        }
    printf( "%d", robotPts );
    puts( "" );
    robotPts = 0;
    }

    return 0;
}
