/*
Nome:      Tecle & Some
ID:        1484
Resposta:  Accepted
Linguagem: C++
Tempo:     0.164s
Tamanho:   1,81 KB
Submissao: 25/06/17 16:10:42
*/
#include <bits/stdc++.h>
using namespace std;

long long S;
int D, uv[10][10] = {
    {7, 8, 9, -1},
    {2, 4, 5, -1},
    {1, 3, 4, 5, 6, -1},
    {2, 5, 6, -1},
    {1, 2, 5, 7, 8, -1},
    {1, 2, 3, 4, 6, 7, 8, 9, -1},
    {2, 3, 5, 8, 9, -1},
    {0, 4, 5, 8, -1},
    {0, 4, 5, 6, 7, 9, -1},
    {0, 5, 6, 8, -1}
};

bool one_solution;

void solve(int u, long long sum, long long total_sum, string act_sol, string sol, vector<int> used)
{
    used[u] = 1;

    bool act_sol_equal_to_D = false; // Verifica o caso especial

    if((int)act_sol.size() == D || total_sum + sum == S)
    {
        if(sol == "")
            sol += act_sol;
        else
            sol += " " + act_sol;
        act_sol_equal_to_D = (int)act_sol.size() == D;
        total_sum += sum;
        act_sol = "";
        sum = 0;
    }

    if(total_sum == S)
    {
        cout << sol << endl;
        if(act_sol_equal_to_D && u > 6 && !used[0]) // Caso a ultima solucao tenha tamanho igual ao D
            cout << sol << " 0" << endl;            // e pode ir para o zero, entao uma nova solucao
        one_solution = true;                        // existe
        return;
    }

    for(int v = 0; uv[u][v] != -1; v++)
    {
        int next = uv[u][v];

        if(!used[next] && sum * 10 + next <= S)
        {
            solve(next, sum * 10 + next, total_sum, act_sol + char('0' + next), sol, used);
        }
    }
}

int main()
{
    int teste = 1;

    while(scanf("%lld%d", &S, &D) && S != -1)
    {
        printf("#%d\n", teste++);

        one_solution = false;

        if(S < pow(10, D + 1))
        {
        for(int i = 0; i < 10; i++)
            solve(i, i, 0, to_string(i), "", vector<int>(10, 0));
        }

        if(!one_solution)
            puts("impossivel");
    }
}
