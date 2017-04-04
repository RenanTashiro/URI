#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream out("1989.out");
    srand(time(NULL));

    int N, M;

    cin >> N >> M;
    out << N << " " << M << "\n";

    for(int i = 0; i < N; i++) {
        out << 100 << " ";
    }

    out << "-1 -1\n";
}
