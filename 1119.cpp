#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, M;

    while(scanf("%d%d%d", &N, &K, &M) && N != 0)
    {
        int number[N];

        for(int i = 0; i < N; i++) {
            number[i] = i+1;
        }

        int i = -1, j = N, counter = N;

        while(counter > 0) {
            for(int k = 0; k < K;) {
                i++;
                i %= N;
                if(number[i] != -1) {
                    k++;
                }
            }
            for(int m = 0; m < M;) {
                j--;
                j = j < 0 ? (N) + j : j;
                if(number[j] != -1) {
                    m++;
                }
            }
            if(i == j) {
                printf("%s%3d", counter == N ? "" : ",", i+1);
            } else {
                printf("%s%3d%3d", counter == N ? "" : ",", i+1, j+1);
            }
            number[j] = -1;
            number[i] = -1;
            counter -= i == j ? 1 : 2;
        }

        puts("");
    }
}
