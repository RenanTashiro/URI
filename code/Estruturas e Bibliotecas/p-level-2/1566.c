/*
Nome:      Altura
ID:        1566
Resposta:  Accepted
Linguagem: C
Tempo:     0.680s
Tamanho:   1,01 KB
Submissao: 10/06/15 17:04:31
*/
#include <stdio.h>
#include <stdlib.h>

void csort(int array[], const int end, const int max, const int min)
{
  int i;
  const int range = max-min+1;
  int count[range+1],
      scratch[end];

  for(i=0; i<range+1; i++)
    count[i] = 0;

  for(i=0; i<end; i++) {
    int c = array[i]+1-min;
    count[c]++;
  }

  for(i=1; i<range; i++)
    count[i] += count[i-1];

  for(i=(end-1); i>=0; i--) {
    int c = array[i]-min;
    int s = count[c];
    scratch[s] = array[i];
    count[c]++;
  }

  for(i=0; i<end; i++)
    array[i] = scratch[i];
}
int main (void)
{
    int NC, N;
    unsigned i, j;

    scanf( "%d", &NC );

    for( i = 0; i < NC; i++ ){

        scanf( "%d", &N );

        int Ni[N];

        for( j = 0; j < N; j++ ){
            scanf( "%d", &Ni[j] );
        }

        csort( Ni, N, 230, 20 );

        printf( "%d", Ni[0] );

        for( j = 1; j < N; j++ ){
            printf( " %d", Ni[j] );
        }

        puts( "" );
    }


	return 0;
}
