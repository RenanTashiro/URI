#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream out("1633.out");
    srand(time(NULL));

    for(int k = 0; k < 3; k++) {
        const int N = 1000;

        out << N << "\n" << 1 << ' ' << 100 << "\n";

        for(int i = 1; i < N; i++) {
            out << rand() % 1000 + 1 << " " << rand() % 1000 + 1 << "\n";
        }
    }

}
