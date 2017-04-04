#include <bits/stdc++.h>

using namespace std;

struct Roman {
    int value;
    char symbol;
};

void hundred( int n )
{
    string h[] = { "C", "CC", "CCC" , "CD", "D", "DC", "DCC", "DCCC" , "CM" };
    if( n > 0 ) cout << h[n-1];
}

void ten( int n )
{
    string d[] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
    if( n > 0 ) cout << d[n-1];
}

void one( int n )
{
    string o[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    if( n > 0 ) cout << o[n-1];
}

int main()
{
    int N;

    scanf( "%d", &N );

    hundred( N / 100 );
    ten( ( N % 100 ) / 10 );
    one( N % 10 );

    puts( "" );

    return 0;
}
