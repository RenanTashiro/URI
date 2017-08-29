/*
Nome:      Calçada da Fama
ID:        1777
Resposta:  Accepted
Linguagem: C++
Tempo:     0.184s
Tamanho:   2,12 KB
Submissao: 13/08/17 09:03:24
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

vector<ii> create_interval_tree(int a[], int b[], int C)
{
    vector<ii> tree(2 * C + 1, ii(0,0));

    for(int i = 0; i < C; i++)
    {
        int index = 1;

        while(index < 2 * C + 1)
        {
            if(tree[index].first == 0)
            {
                tree[index].first = a[i];
                tree[index].second = b[i];
                break;
            }
            else
            {
                if(tree[index].first <= a[i] && b[i] <= tree[index].second)
                    break;
                else if(a[i] <= tree[index].first && tree[index].second <= b[i]) {
                    tree[index].first = a[i];
                    tree[index].second = b[i];
                    break;
                }
                else if(a[i] < tree[index].first) {
                    index = 2 * index;
                } else {
                    index = 2 * index + 1;
                }
            }
        }
    }

    return tree;
}

// se nao passar por referencia a tree, ele fica 10x mais lento
bool inside_any_interval(int value, const vector<ii> &tree, int C)
{
    int index = 1;

    while(index < 2 * C + 1 && tree[index].first)
    {
        if(tree[index].first <= value && value <= tree[index].second)
            return true;
        else if(value < tree[index].first)
            index = 2 * index;
        else
            index = 2 * index + 1;
    }

    return false;
}

int main()
{
    int T, a[10005], b[10005];

    scanf("%d", &T);

    for(int t = 1; t <= T; t++)
    {
        int N, C, E;

        scanf("%d%d", &N, &C);

        for(int i = 0; i < C; i++)
            scanf("%d%d", &a[i], &b[i]);

        scanf("%d", &E);

        vector<ii> tree = create_interval_tree(a, b, C);
        int ans = 0;

        for(int i = 0; i < E; i++)
        {
            int xi;

            scanf("%d", &xi);

            if(inside_any_interval(xi, tree, C)) {
                ans++;
            }
        }

        printf("Caso #%d: %d\n", t, ans);
    }
}

