#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, counter = 0;
    string actString = "FACE";

    cin >> N;

    while( N-- )
    {
        string locString = "", aux;

        for( int i = 0; i < 4; i++ ) {
            cin >> aux;
            locString += aux;
        }

        string cpy = locString;

        reverse( locString.begin(), locString.end() );

        int i, j;

        for( i = ( int ) actString.size() - 1, j = 3; i >= 0 && j >= 0; i--, j-- ) {
            if( actString[i] != locString[j] )
                break;
        }

        if( j == -1 ) {
            counter++;
            actString.resize( actString.size()  - 4 );
        }
        else {
            actString += cpy;
        }

        if( actString.empty() ) {
            actString += "FACE";
        }
    }

    cout << counter << "\n";

    return 0;
}
