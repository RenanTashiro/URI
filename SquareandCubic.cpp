#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int N = 0, n = 0;

    while(n < i){
        N++;
        cout << N << " " << N * N << " " << N * N * N << endl;
        n++;
    }
}
