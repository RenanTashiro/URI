#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double L, X, l;

    while(cin >> L && L != 0){

    l = 2 * L - 3;

        X = (l - L) / L;

        cout << setiosflags(ios::fixed) << setprecision(6) << X << endl;
    }
}
