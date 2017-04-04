#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int N, warriors, row;

    cin >> N;

        for( unsigned int i = 0; i < N; i++){

            cin >> warriors;

            row = (sqrt(1 + 8 * warriors) - 1) / 2;

            cout << row << endl;

        }

    return 0;
}
