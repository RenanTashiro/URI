/*
Nome:      Confederação
ID:        1710
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.124s
Tamanho:   696 Bytes
Submissao: 22/11/15 11:35:25
*/
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