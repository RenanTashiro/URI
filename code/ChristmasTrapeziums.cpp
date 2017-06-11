#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T, Q;
    double A, B;

    while(cin >> T && T != 0){

        for(int i = 1; i < T + 1; i++){

            cin >> Q >> A >> B;

            cout << setiosflags(ios::fixed) << setprecision(2) << "Size #"<<i<<":\nIce Cream Used: "<< (A+B) * 5 / 2 * Q<<" cm2\n";
        }
        cout << endl;
    }
}
