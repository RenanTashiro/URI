#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, X;
    unsigned int long long peso;
    cin >> N;

        for(int i = 0; i < N; i++){

         cin >> X;

         peso = pow(2,(X-1)) / 6000;

         cout << peso << " kg" << endl;

        }
}
