/*
Nome:      GigaDrive
ID:        2537
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.700s
Tamanho:   1,3 KB
Submissao: 09/01/18 09:48:17
*/
#include <bits/stdc++.h>
using namespace std;

int tree[1005][1005];
int max_x, max_y;

void update(int x , int y , int val){
    int y1;
    while (x <= max_x){
        y1 = y;
        while (y1 <= max_y){
            tree[x][y1] += val;
            y1 += (y1 & -y1);
        }
        x += (x & -x);
    }
}

int read(int x, int y){
    int sum = 0, y1;
    while(x > 0){
        y1 = y;
        while(y1 > 0) {
            sum += tree[x][y1];
            y1 -= (y1 & -y1);
        }
        x -= (x & -x);
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);

    int N, M;

    while(cin >> N >> M)
    {
        for(int i = 0; i <= N; i++)
            for(int j = 0; j <= N; j++)
                tree[i][j] = 0;

        max_x = max_y = N;

        int val;

        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                cin >> val;

                if(val)
                    update(i, j, 1);
            }
        }

        while(M--)
        {
            int i, j, i1, j1, i2, j2;

            cin >> i >> j >> i1 >> j1 >> i2 >> j2;

            update(i, j, 1);

            cout << read(i2, j2) - read(i2, j1-1) - read(i1-1, j2) + read(i1-1, j1-1) << endl;
        }
    }
}
