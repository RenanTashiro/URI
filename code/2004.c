#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N;
        vector<int> p(0, 100);

        scanf("%d", &N);

        while(N--)
        {
            int t, lp;
            scanf("%d %d", &t, &lp);

            if(p[t] != 0) {
                if(p[t] > 100 && lp > p[t]) {
                    p[t] = lp;
                } else if(lp > p[t]){
                    p[t] = lp;
                }
            }
        }

        int ans = 0;

        for(auto a : p) {
            if(a != 0) {
                ans += a;
            }
        }

        printf("%d\n", ans);
    }
}
