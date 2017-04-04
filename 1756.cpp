#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int T;

    cin >> T;

    while( T-- )
    {
        int N, Y;
        double P;

        cin >> N >> Y >> P;

        string ind_01, ind_02, ind_03;

        cin >> ind_01 >> ind_02 >> ind_03;

        string chield_01, chield_02, tmp;

        chield_01.assign( ind_01.begin(), ind_01.begin() + Y );
        tmp.assign( ind_02.begin() + Y, ind_02.end() );
        chield_01 += tmp;

        chield_02.assign( ind_02.begin(), ind_02.begin() + Y );
        tmp.assign( ind_01.begin() + Y, ind_01.end() );
        chield_02 += tmp;

        double prob_01 = 1.0, prob_02 = 1.0;

        for( int i = 0; i < N; i++ ) {
            if( chield_01[i] == ind_03[i] ) {
                prob_01 *= ( 1.0 - P );
            }
            else {
                prob_01 *= P;
            }
            if( chield_02[i] == ind_03[i] ) {
                prob_02 *= ( 1.0 - P );
            }
            else {
                prob_02 *= P;
            }
        }

        cout << fixed << setprecision( 7  ) << prob_01 + prob_02 - ( prob_01 * prob_02 ) << "\n";
    }

    return 0;
}
