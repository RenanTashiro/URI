#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N = 0;

    for(int i = 0; i < 1000; i++){

    cout << "N[" << i << "] = " <<  N << endl;
    N++;
    if(N == T)
    N = 0;
    }

}
