/*
Nome:      Jogo das Pilhas
ID:        1522
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.080s
Tamanho:   1,16 KB
Submissao: 04/12/15 19:55:11
*/
#include <bits/stdc++.h>

#define mk(x,y,z) make_tuple(x, y, z)

using namespace std;

int stck1[105], stck2[105], stck3[105];
bool possible = false;
map<tuple<int,int,int>,bool> table;

void is_possible(int p1, int p2, int p3)
{
    if(p1 == 0 && p2 == 0 && p3 == 0) {
        possible = true;
        return;
    }
    if(possible) {
        return;
    }

    for(int i = 1; i < 8; i++) {
        int new_p1 = p1, new_p2 = p2, new_p3 = p3;
        int sum = 0;

        if(p1 != 0 && i & (1 << 0)) sum += stck1[new_p1--];
        if(p2 != 0 && i & (1 << 1)) sum += stck2[new_p2--];
        if(p3 != 0 && i & (1 << 2)) sum += stck3[new_p3--];

        if(sum % 3 == 0 && !table[mk(new_p1, new_p2, new_p3)]) {
            table[mk(new_p1, new_p2, new_p3)] = true;
            is_possible(new_p1, new_p2, new_p3);
        }
    }
}

int main()
{
    int N;

    while(scanf("%d", &N) && N != 0)
    {
        for(int i = N; i > 0; i--) {
            scanf("%d %d %d", &stck1[i], &stck2[i], &stck3[i]);
        }

        possible = false;
        table.clear();
        is_possible(N, N, N);

        printf("%d\n", possible);
    }
}
