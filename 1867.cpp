#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1, n2;

    while( cin >> n1 >> n2 && ( n1 != "0" || n2 != "0" ) )
    {
        int value1, value2;

        while( n1.size() != 1 )
        {
            value1 = 0;

            for( unsigned i = 0; i < n1.size(); i++ )
                value1 += n1[i] - 48;

            n1 = to_string( value1 );
        }

        while( n2.size() != 1 )
        {
            value2 = 0;

            for( unsigned i = 0; i < n2.size(); i++ )
                value2 += n2[i] - 48;

            n2 = to_string( value2 );
        }

        if( value1 > value2 )
            cout << "1\n";
        else if( value1 < value2 )
            cout << "2\n";
        else
            cout << "0\n";
    }
}
