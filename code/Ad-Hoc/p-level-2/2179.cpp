/*
Nome:      Batuke
ID:        2179
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,03 KB
Submissao: 10/09/17 20:31:10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, x, y;

    cin >> N >> x >> y;

    int visited[N][N], qtd_visited = 0, inc = 2, it = 0, counter = 1, c = 1;
    int inc_x[] = {0, -1, 0, 1}, inc_y[] = {-1, 0, 1, 0};

    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++)
        visited[i][j] = 0;

    vector<int> path;

    while(qtd_visited != N*N)
    {
        if(x >= 0 && x < N && y >=0 && y < N && !visited[x][y])
        {
            visited[x][y] = 1;
            qtd_visited++;
            path.push_back(x * N + y + 1);
        }

        x += inc_x[inc % 4];
        y += inc_y[inc % 4];
        c--;

        if(c == 0)
        {
            inc++;
            if(inc % 2 == 0)
                counter++;
            c = counter;
        }

        it++;
    }

    cout << path[0];

    for(int i = 1; i < N*N; i++)
        cout << ' ' << path[i];

    cout << endl << it << endl;
}
/*
[0,+] = 2
[+,0] = 3
[0,-] = 0
[-,0] = 1
*/

// 1D 1B 2E 2C 3D 3B 4E 4C
