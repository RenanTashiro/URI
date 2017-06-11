#include <stdio.h>

void timer( const int time, const char *message )
{
    unsigned i, j;
    for( j = 0; message[j] != '\0'; j++ ){
        printf( "%c", message[j] );
        for( i = 0; i < time * 10e5; i++ );
    }
}

int main()
{
    char *str = "Mensagem para imprimir";

    timer( 1, "----------------------------------------" );
    puts( "" );
    timer( 2, str );
    puts( "" );
    timer( 1, "----------------------------------------" );
    puts( "" );
    timer( 2, "Por favor, insira sua senha: Def************\n\n" );
    timer( 2, "Senha Insirida com sucesso. Obrigado, aguarde enquanto carregamos o arquivo.\n\n\t" );

    unsigned i, j;
    for( j = 0; j <= 100; j++ ){
        printf( "\b\b\b" );
        printf( "%d%%", j );
        for( i = 0; i < 3 * 10e5; i++ );
    }

    timer( 2, "\n\n\tVoce deseja abrir o arquivo?(S/N)\n\n" );
    return 0;
}
