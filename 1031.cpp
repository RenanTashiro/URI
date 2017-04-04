#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while( cin >> N && N != 0 )
    {
        vector<int> rede(N);

        for( int i = 0; i < N; i++ ) rede[i] = i+1;

        vector<int> cpy = rede;
        int inc = 0, pivo;

        while( cpy.front() != 13 )
        {
            cpy = rede;
            pivo = 0;
            while( cpy.size() != 1 ) {
                cpy.erase( cpy.begin()+pivo );
                pivo += inc;
                pivo %= cpy.size();
            }
            inc++;
        }
        cout << inc << "\n";
    }

    return 0;
}
