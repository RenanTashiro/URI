#include <bits/stdc++.h>

using namespace std;

// ( n k ) = n! / k! * (n-k) !

double triangule_of_fortune(int n, int k, int fat)
{
    double ans = 1.0;
    int j = k;

    for(int i = n; i > k; i--) {
        ans *= i * 0.25 / j--;
    }

    return ans;
}

int main()
{
    int N, K;

    cin >> N;

    N--;
    K = N/2;

    cout << fixed << setprecision(2) << triangule_of_fortune(N, K, N) * 100 << "\n";
}
