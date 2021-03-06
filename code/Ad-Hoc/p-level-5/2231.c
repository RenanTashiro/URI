/*
Nome:      Temperatura Lunar
ID:        2231
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.048s
Tamanho:   847 Bytes
Submissao: 11/10/16 10:36:59
*/
 #include <stdio.h>

int main()
{
    int N, M, teste = 1;

    while( scanf( "%d%d", &N, &M ) && N != 0 ){

        int temperatura[N];
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &temperatura[i] );
        }

        int media_atual = 0;

        for( i = 0; i < M; i++ ){
            media_atual += temperatura[i];
        }

        int menor_media = media_atual, maior_media = media_atual;

        for( i = M; i < N; i++ ){
            media_atual += ( temperatura[i] - temperatura[i-M] );
            if( media_atual > maior_media ) maior_media = media_atual;
            if( media_atual < menor_media ) menor_media = media_atual;
        }

        printf( "Teste %d\n", teste++ );
        printf( "%d %d\n\n", menor_media / M, maior_media / M );
    }

    return 0;
}