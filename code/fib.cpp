#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int fib[2];
    fib[0] = 1;
    fib[1] = 2;

    for(int i = 2; i <= N; i++) {
        int tmp = fib[1];
        fib[1] = fib[1] + fib[0];
        fib[0] = tmp;
    }

    cout << fib[1] << "\n";
}
