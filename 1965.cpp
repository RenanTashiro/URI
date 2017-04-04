#include <bits/stdc++.h>

using namespace std;

#define UP false
#define DOWN true
#define PREC 10000000
#define DIV 100000

int main()
{
    ios::sync_with_stdio(false);

    int N;
    double D, P;

    cin >> N >> D >> P;

    int act, prev, waves, left = 0, right = 0;
    bool dir = UP, flag = false;

    long long newD = D * PREC, newP = P * PREC;

    cin >> prev;

    for(int i = 1; i < N; i++) {
        cin >> act;

        if(!flag) {
            if(prev > act) {
                dir = DOWN;
                right++;
                flag = true;
            }
            else if(prev < act) {
                dir = UP;
                left++;
                flag = true;
            }
        }
        else {
            if(prev < act && dir == DOWN) {
                left++;
                dir = UP;
            }
            else if(prev > act && dir == UP) {
                right++;
                dir = DOWN;
            }
        }
        prev = act;
    }

    waves = left + right;

    string coxinha;

    cin >> coxinha;

    int ans = (newP+(right*newD))/(waves);

    cout << ans << " " << ans-newD << "\n";

    if(coxinha.compare("<)") == 0) {
        cout << "<) " << left  << " R$" << ans/PREC << '.';
        if(abs(ans%PREC)/DIV < 10) cout << '0';
        cout << abs(ans%PREC)/DIV << "\n";

        cout << "(> " << right << " R$" << (ans-newD)/PREC << '.';
        if(abs((ans-newD)%PREC)/DIV < 10) cout << '0';
        cout << abs((ans-newD)%PREC)/DIV << "\n";
    }
    else {
        cout << "<) " << left << " R$" << (ans-newD)/PREC << '.';
        if(abs((ans-newD)%PREC)/DIV < 10) cout << '0';
        cout << abs((ans-newD)%PREC)/DIV << "\n";

        cout << "(> " << right  << " R$" << ans/PREC << '.';
        if(abs(ans%PREC)/DIV < 10) cout << '0';
        cout << abs(ans%PREC)/DIV << "\n";
    }

    return 0;
}
/*
20 100 0.01
1 2 3 1 2 3 3 2 1 3 2 1 4 5 6 8 4 1 2 6
(>*/
