#include <bits/stdc++.h>

using namespace std;

void sieveErastosthenes()
{
    const int until = 5000;
    int counter = 0;

    vector<int> number(until, 1);
    list<int> primes;
    for(int i = 2; i < until; i++) {
        if(number[i]) {
            primes.push_back(i);
            counter++;
            for(int j = i*2; j < until; j += i) {
                number[j] = 0;
            }
        }
    }

    for(auto p : primes) {
        cout << p << "\n";
    }

    cout << counter << "****\n";
}

int main()
{
    int M, N;

    sieveErastosthenes();

    scanf("%d %d", &M, &N);

    int A[M], B[M], C[M], D[M];

    for(int i = 0; i < M; i++) {
        scanf("%d %d %d %d", &A[i], &B[i], &C[i], &D[i]);
    }

    int X, Y, Z;
    int maxmium = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d %d %d", &X, &Y, &Z);
        int ans = 0;
        for(int j = 0; j < M; j++) {
            if(A[j]*X + B[j]*Y + C[j]*Z > D[j]) {
                //ans += primo;
            }
        }
    }

    printf("%d\n", maxmium);
}
