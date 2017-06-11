#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, tea[5] = {0};
    int guess;

    scanf("%d", &T);

    for(int i = 0; i < 5; i++) {
        scanf("%d", &guess);
        tea[guess]++;
    }

    printf("%d\n", tea[T]);
}
