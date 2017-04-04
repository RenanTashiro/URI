#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) && N != -1) {
        unsigned long long int tempo_total = 0;

        for(int i = 0; i < N; i++) {
            int cap;
            scanf("%d", &cap);
            tempo_total += cap*(N-i);
        }

        tempo_total *= M;

        printf("%llu\n", tempo_total);
    }
}
