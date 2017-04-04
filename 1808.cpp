#include <iostream>
using namespace std;

int main()
{
    string grade;
    size_t counter = 0;
    double total = 0;

    cin >> grade;

    for( int i = 0; grade[i] != '\0'; i++ ){

        if( grade[i+1] == '0' ){
            total += 10;
            i++;
        }
        else{
            total += grade[i] - 48;
        }

        counter++;
    }

    cout.precision( 2 );
    cout << fixed << total / counter << endl;

    return 0;
}
