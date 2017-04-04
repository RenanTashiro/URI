#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    while(scanf("%d %d", &N, &M) != EOF)
    {
        map<int,vector<int>> table;
        int value, k;

        for(int i = 1; i <= N; i++) {
            scanf("%d", &value);
            table[value].push_back(i);
        }

        for(int i = 0; i < M; i++) {
            scanf("%d %d", &k, &value);
            int c = 0; k--;
            for(const auto& t : table[value]) {
                if(c == k) {
                    printf("%d\n", t);
                }
                c++;
            }
            if(c <= k) {
                puts("0");
            }
        }
    }
}
