#include <bits/stdc++.h>

using namespace std;

unsigned long long int fibonacci(int n)
{
    if(n == 1 || n == 2)
        return 1;
    return (1/sqrt(5))*(pow((1+sqrt(5))/2, n)-pow((1-sqrt(5))/2, n));
}

int main()
{
    int n, m;

    cout << (6515641+5454)%65654 << " " << 6515641%65654 + 5454%65654 << "\n";

    while(cin >> n) {
        cout << fibonacci(n) << "\n";
    }
}
