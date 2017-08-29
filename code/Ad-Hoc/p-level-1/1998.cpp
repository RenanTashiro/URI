/*
Nome:      Awari 2.0
ID:        1998
Resposta:  Accepted
Linguagem: C++
Tempo:     0.040s
Tamanho:   852 Bytes
Submissao: 28/11/15 16:20:47
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main()
{
    int N;

    while(scanf("%d", &N) && N != -1) {
        vi box(N);
        int ans = 0;

        for(int i = 0; i < N; i++) {
            scanf("%d", &box[i]);
            ans += box[i];
        }

        bool stop;

        do {
            stop = true;
            for(int i = 0; i < N; i++) {
                if(box[i] == i+1) {
                    for(int j = 0; j < i; j++) {
                        box[j]++;
                    }
                    box[i] = 0;
                    ans--;
                    stop = false;
                    break;
                }
            }
        } while(!stop);

        if(ans == 0) {
            puts("S");
        } else {
            puts("N");
        }
    }
}
