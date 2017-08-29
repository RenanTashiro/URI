/*
Nome:      Runner Pawns
ID:        1343
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   2,33 KB
Submissao: 22/08/16 19:44:26
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<vector<int>,int> vi;

int new_position(int pos, int i)
{
    int x[] = {-1, -2, -2, -1, 1, 2, 2, 1}, y[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int row = (pos-1) / 8 + x[i], col = (pos-1) % 8 + y[i];

    if(row >= 0 && row < 8 && col >= 0 && col < 8)
        return row * 8 + (col+1);
    return -1;
}

int bfs(vector<int> pieces)
{
    map<vector<int>, bool> visited;
    queue<vi> Q;

    Q.push(vi(pieces, 0));
    visited[pieces] = true;

    while(!Q.empty())
    {
        vi u = Q.front(); Q.pop();
        int check = 0, len = (int)u.first.size();

        for(int i = 0; i < len - 1; i++) {
            //printf("pawn[%d]=%d\n", i, u.first[i]);
            check += u.first[i];
        }

       // printf("horse=%d\n", u.first[len-1]);

        if(!check) {
            return u.second;
        }

        for(int i = 0; i < 8; i++)
        {
            int v = new_position(u.first[len-1], i);

            if(v > 0 && v < 65)
            {
                vector<int> new_pieces(u.first);
                new_pieces[len-1] = v;

                bool flag = false;

                for(int i = 0; i < len - 1; i++)
                {
                    if(new_pieces[i] == v) {
                       // printf("********%d %d %d\n", new_pieces[i], v, u.first[len-1]);
                        new_pieces[i] = 0;
                    } else if(new_pieces[i] != 0) {
                        new_pieces[i] += 8;
                        if(new_pieces[i] > 64 or new_pieces[i] == v) {
                            flag = true;
                            break;
                        }
                    }
                }

                if(!flag && !visited[new_pieces])
                {
                    visited[new_pieces] = true;
                    Q.push(vi(new_pieces, u.second + 1));
                }
            }
        }
    }

    return -1;
}

int main()
{
    int P;

    while(scanf("%d", &P) && P != 0)
    {
        vector<int> pieces(P+1); // a ultima posicao e o cavalo

        for(int i = 0; i <= P; i++)
            scanf("%d", &pieces[i]);

        int ans = bfs(pieces);

        if(ans != -1)
            printf("%d\n", ans);
        else
            puts("impossible");
    }
}
// 2 9 17 2
