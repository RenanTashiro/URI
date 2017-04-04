#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N;
    cin >> N;

    for(int i = 0; i < 100; i++){

    cout << setiosflags(ios::fixed) << setprecision(4) << "N[" << i << "] = " << N << endl;
    N /= 2;
    }

}
