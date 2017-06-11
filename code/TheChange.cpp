#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T, D, N;
    long double price, cost, rem = 0;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> D >> N;

        for(int l = 0; l < N; l++){

            cin >> cost;

            price = (double) D;

                while(price > 0){
                    price -= ( double ) cost;
                }
                if(price < 0){
                    price += ( double )cost;
                }
                if(rem < price){
                    rem = price;
                }
        }

    cout << setiosflags(ios::fixed) << setprecision(2) << rem << endl;
    rem = 0;
    }
    return 0;
}
