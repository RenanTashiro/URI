#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M, N;

    scanf("%d %d", &M, &N);

    int A[M], B[M], C[M], D[M];

    for(int i = 0; i < M; i++) {
        scanf("%d %d %d %d", &A[i], &B[i], &C[i], &D[i]);
    }

    int X, Y, Z, maximum;
    map<string,int> cont;

    for(int i = 0; i < N; i++) {
        scanf("%d %d %d", &X, &Y, &Z);
        string id = "";
        for(int j = 0; j < M; j++) {
            id += A[j]*X + B[j]*Y + C[j]*Z > D[j] ? "1" : "0";
        }
        cont[id]++;
    }

    for(auto c : cont) {
        if(get<1>(c) > maximum) {
            maximum = get<1>(c);
        }
    }

    printf("%d\n", maximum);
}

/*
8 16
83 -91 81 91
-17 -69 -26 64
-83 -90 31 1
-78 -80 13 -23
76 58 2 -16
81 -49 -6 27
-68 20 -87 63
-42 65 98 77
68 36 -99
-39 -33 5
-1 -17 27
17 -1 44
-49 80 -14
21 2 36
14 -25 -93
-86 35 77
74 -70 -50
45 -47 79
91 -5 94
-20 -48 1
-12 14 19
43 46 -77
-43 77 -35
17 -69 65


2
*/
