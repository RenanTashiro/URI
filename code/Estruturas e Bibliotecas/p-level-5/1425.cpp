/*
Nome:      Presente?!
ID:        1425
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   947 Bytes
Submissao: 13/09/15 14:18:56
*/
#include <cstdio>
  
bool flag;
  
void jumpFrog( const int N, int actualPos, int dest, int range );
  
int main()
{
    int N, M;
  
    while( scanf( "%d%d", &N, &M ) && N != 0 )
    {
        flag = false;
        
        if( N >= 49 )
        {
            puts( "Let me try!" );
        }
        else
        {
            jumpFrog( N, 1, M, 3 );
            if( flag )
                puts( "Let me try!" );
            else
                puts( "Don't make fun of me!" );
        }
    }
  
    return 0;
}
  
void jumpFrog( const int N, int actualPos, int dest, int range )
{
    if( actualPos == dest )
        flag = true;
    else
    {
        if( actualPos - range > 0 )
        {
            jumpFrog( N, actualPos - range, dest, range + 2 );
        }
  
        if( actualPos + range <= N )
        {
            jumpFrog( N, actualPos + range, dest, range + 2 );
        }
    }
}