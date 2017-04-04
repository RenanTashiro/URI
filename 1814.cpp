#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, instancia = 1;

    while( cin >> n >> m && n != 0 )
    {
        string cadeia[n];

        for( int i = 0; i < n; i++ ) {
            cin >> cadeia[i];
        }

        int change = 0;

        for( int i = 0; i < m; i++ ) {
            map<int,int> qt;
            int hi = 0;
            for( int j = 0; j < n; j++ ) {
                qt[cadeia[j][i]]++;
            }
            for( auto& a : qt ) {
                if( get<1>(a) > hi ) {
                    hi = get<1>(a);
                }
            }
            cout << n - hi << "\n";
            change += ( n - hi );
        }

        cout << "Instancia " << instancia++ << "\n" << change << "\n";
    }

    return 0;
}
