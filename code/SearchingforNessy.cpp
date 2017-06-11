#include <iostream>
using namespace std;

int main()
{
    int T, n, m, N, M;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> n >> m;

        n -= 2;
        m -= 2;

        N = n / 3;
        M = m / 3;

        if(n % 3 != 0)
            N++;
        if(m % 3 != 0)
            M++;

        cout << N * M << endl;
    }
}
