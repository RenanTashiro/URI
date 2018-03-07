/*
Nome:      Demogorgon
ID:        2532
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.772s
Tamanho:   1,17 KB
Submissao: 18/06/17 18:46:56
*/
#include <bits/stdc++.h>
using namespace std;

#define INF 100000000

int dp[1005][2005];
int prune[2005];

int optimal_cast(int hp, int index, int spell_dmg[], int mana_cost[], int N_SPELL)
{
    if(hp <= 0) return 0;
    if(index == N_SPELL) return INF;
    if(dp[index][hp] != -1) return dp[index][hp];
    if(dp[index][hp] < prune[hp]) return INF;
    int ans = INF;
    ans = min(ans, optimal_cast(hp, index + 1, spell_dmg, mana_cost, N_SPELL)); // DONT CAST
    ans = min(ans, mana_cost[index] + optimal_cast(hp - spell_dmg[index], index + 1, spell_dmg, mana_cost, N_SPELL)); // CAST
    prune[hp] = min(prune[hp], ans);
    return dp[index][hp] = ans;
}

int main()
{
    int n_spells, monster_hp;

    while(scanf("%d%d", &n_spells, &monster_hp) != EOF)
    {
        int spell_dmg[n_spells], mana_cost[n_spells];

        for(int i = 0; i < n_spells; i++)
        {
            scanf("%d%d", &spell_dmg[i], &mana_cost[i]);
        }

        memset(dp, -1, sizeof dp);
        memset(prune, -1, sizeof prune);

        int ans = optimal_cast(monster_hp, 0, spell_dmg, mana_cost, n_spells);

        printf("%d\n", ans == INF ? -1 : ans);
    }
}