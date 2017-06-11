#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    ifstream in;
    in.open("1088.txt");
    if( in == NULL ) {
        cout << "null\n";
    }
    while( in >> N && N != 0 )
    {
        vector<int> bucket;
        int bubble, swaps = 0;

        for( int i = 0; i < N; i++ ) {
            in >> bubble;
            vector<int>::reverse_iterator it;
            int n = 0;
            for( it = bucket.rbegin(); it != bucket.rend(); it++ ) {
                if( *it < bubble ) break;
                n++;
            }
            bucket.insert( bucket.end()-n, bubble );
            swaps += n;
        }

        if( swaps & 1 ) {
            cout << "Marcelo\n";
        }
        else {
            cout << "Carlos\n";
        }
    }
}
