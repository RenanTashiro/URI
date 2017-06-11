#include <bits/stdc++.h>

using namespace std;

int modularArithmetic( int n ) {
    int value = 1;
    for( int i = n; i > 0; i-- ) {
        value *= i;
        value %= 100000007;
    }

    return value;
}

int main()
{
    string ana;

    while( cin >> ana && !( ana.size() == 1 && ana[0] == 0 ) )
    {
        map<char,int> t;
        int value = 1;

        for( size_t i = 0; i < ana.size(); i++ ) {
            t[ana[i]]++;
        }

        for( map<char,int>::iterator it = t.begin(); it != t.end(); it++ ) {
            value *= modularArithmetic( it->second );
        }

        cout << modularArithmetic( ana.size() ) / value << "\n";
    }

    return 0;
}
