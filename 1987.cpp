#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string n;

    while(cin >> N) {
        cin >> n;

        int len = (int) n.size(), ans = 0;

        for(int i = 0; i < len; i++) {
            ans += n[i];
        }

        ans -= (48 * len);

        if(ans % 3 == 0) {
            cout << ans << " sim\n";
        } else {
            cout << ans << " nao\n";
        }
    }
}
