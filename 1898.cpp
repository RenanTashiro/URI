#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string lineOne, lineTwo;

    cin >> lineOne >> lineTwo;

    string digitOne = "", sumOne = "", sumTwo = "";
    int counter = 0;

    for( size_t i = 0; i < lineOne.size(); i++ ) {
        if( isdigit( lineOne[i] ) || lineOne[i] == '.' ) {
            if( counter++ < 11 ) {
                digitOne += lineOne[i];
            }
            else {
                sumOne += lineOne[i];
            }
        }
    }

    for( size_t i = 0; i < lineTwo.size(); i++ ) {
        if( isdigit( lineTwo[i] ) || lineTwo[i] == '.' ) {
            sumTwo += lineTwo[i];
        }
    }


    cout << "cpf " << digitOne << "\n";
    cout << fixed << setprecision( 2 ) << stod( sumOne ) + stod( sumTwo ) << "\n";

    return 0;
}
