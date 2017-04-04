#include <bits/stdc++.h>

using namespace std;

string ordened(const vector<int> &seq, int init, int lst)
{
    bool eq = true, grow = true, decre = true;

    for(int i = init; i < lst; i++) {
        if(seq[i] != seq[i+1]) {
            eq = false;
        }
        if(seq[i] < seq[i+1]) {
            decre = false;
        } else if(seq[i] > seq[i+1]) {
            grow = false;
        }
    }

    if(eq == true) {
        return "ALL EQUAL";
    } else if(grow == true) {
        return "NON DECREASING";
    } else if(decre == true) {
        return "NONINCREASING";
    }

    return "NONE";
}

int main()
{
    ios::sync_with_stdio(false);

    int N;

    while(cin >> N)
    {
        vector<int> seq(N);

        for(int i = 0; i < N; i++) {
            cin >> seq[i];
        }

        int Q, op, x, y;

        cin >> Q;

        while(Q--) {
            cin >> op >> x >> y;

            switch(op) {
                case 0: swap(seq[x-1], seq[y-1]);                  break;
                case 1: seq[x-1] = y;                              break;
                case 2: seq.insert(seq.begin()+(x-1), y);          break;
                case 3: seq.erase(seq.begin()+(x-1));              break;
                case 4: cout << ordened(seq, x-1, y-1) << "\n";    break;
            }
        }
    }
}
