#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N, team_number;
    double D;

    cin >> N >> D;

    while( cin >> team_number ){

        char hour, minute[3], second[3], colon;
        int aux;

        for( int i = 0; i < N; i++ ){
            cin >> hour >> colon >> minute >> colon >> second;

            cout << atoi( &hour ) << endl << atoi( minute ) << endl << atoi( second ) << endl;
        }


    }
}
