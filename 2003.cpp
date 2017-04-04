#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H, M;

    while(scanf("%d:%d", &H, &M) != EOF) {
        int ans = (60+M)-(H-8)*60;
        printf("%s: %d\n", "Atraso maximo", ans <= 0 ? 0 : ans);
    }
}
