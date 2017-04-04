#include <iostream>
using namespace std;

int main()
{
    long long int A, B;

    cin >> A >> B;

    cout << ( ( B * ( B + 1 ) ) / 2 ) - ( ( ( A - 1 ) * ( A ) ) / 2 ) << endl;

}
