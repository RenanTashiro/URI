#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N;
        vector<pair<int,int>> p(101, {0,0});

        scanf("%d", &N);

        while(N--)
        {
            int t, loc_p;
            scanf("%d %d", &t, &loc_p);
            p[t].first  = max(p[t].first, loc_p > 100 ? 0 : loc_p);
            p[t].second = max(p[t].second, loc_p);
        }

        int ans = 0;

        for(int i = 1; i <= 100; i++) {
            if(p[i].first > 9 ) {
                ans += p[i].first;
            } else if(p[i].second != 0) {
                ans += p[i].second;
            }
        }

        printf("%d\n", ans);
    }
}
