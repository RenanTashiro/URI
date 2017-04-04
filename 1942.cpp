#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int N, K;

    cin >> N >> K;

    double matrix[N][K];

    for( int i = 0; i < N; i++ )
        for( int j = 0; j < K; j++ )
            cin >> matrix[i][j];

    for (int a=0;a<N;a++)
    {
        for(int x=0;x<(N+1);x++)
        {
            Amatrixa][x]=matrix[a][x]/matrix[a][a];
        }
        for (int i=0;i<N;i++)
        {

            for (int j=0;j<(N+1);j++)
            {
                if(a==i) continue;
                matrix[i][j]=matrix[i][j]-matrix[a][j]*matrix[i][a];
            }
        }
    }


}
