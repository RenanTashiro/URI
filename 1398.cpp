#include <bits/stdc++.h>

using namespace std;

long long pow(int b, int exp, int MOD)
{
    int o = b;
    for(int i = 0; i < exp; i++) {
        b *= o;
        if(b > MOD) b %= MOD;
    }

    return b;
}

int main()
{
    ios::sync_with_stdio(false);

    const int MOD = 131071;
    string bin;

    while(cin >> bin)
    {
        while(bin.back() != '#') {
            string concat;
            cin >> concat;
            bin += concat;
        }

        long long int ans = 0;
        int pos = bin.find('1');

        if(pos != -1) {
            bin = bin.substr(pos);
        }

        for(int i = (int) bin.size()-2, exp = 0; i >= 0; i--, exp++) {
            ans += bin[i] == '1' ? pow(2, exp, MOD) : 0;
            ans %= MOD;
        }

        cout << (ans == 0 ? "YES" : "NO") << "\n";
    }
}
