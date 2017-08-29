/*
Nome:      Triângulo
ID:        1929
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   641 Bytes
Submissao: 20/09/15 14:52:51
*/
#include <cstdio>
#include <algorithm>
using namespace std;

bool triangle = false;

void isTriangle( int *arr )
{
    if( arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[1] + arr[2] > arr[0] )
        triangle = true;
}

void generatePermutation( int *arr )
{
    for( int i = 0; i < 4 && !triangle; i++ )
    {
        isTriangle( arr );
        swap( arr[i], arr[3] );
    }
}

int main()
{
    int arr[4];

    scanf( "%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3] );

    generatePermutation( arr );

    if( triangle )
        puts( "S" );
    else
        puts( "N" );

    return 0;
}
