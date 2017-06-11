#include <bits/stdc++.h>

using namespace std;

// Trivial thought don't work in this case
int main()
{
    string str_01, str_02;

    while(cin >> str_01 >> str_02) {
        if(str_01.compare("*") == 0 && str_02 == str_01 ) {
            break;
        }

        int ans = 0, len = (int) str_01.size();
        bool diff = false;

        for(int i = 0; i < len; i++) {
            if(str_01[i] == str_02[i]) {
                if(diff) {
                    ans++;
                    diff = false;
                }
            } else {
                diff = true;
            }
        }

        if(diff == true) {
            ans++;
        }

        cout << ans << "\n";
    }
}

/*
-- --- -- -
BBNBBNBBBBB
NNNNNBBNNBN
*/
