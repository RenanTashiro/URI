#include <stdio.h>

int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];

   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

    for( i = 1; i <= n; i++ )
    {
        for( w = 1; w <= W; w++ )
            printf( "%d ", K[i][w] );
        puts( "" );
    }

   return K[n][W];
}

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 )
    {
        int P, quantidade_pizza[N], tempo_de_entrega[N];
        unsigned i;

        scanf( "%d", &P );

        for( i = 0; i < N; i++ )
        {
            scanf( "%d%d", &quantidade_pizza[i], &tempo_de_entrega[i]  );
        }

        printf( "%d min.\n", knapSack( P, tempo_de_entrega, quantidade_pizza, N ) );

    }

    return 0;
}
