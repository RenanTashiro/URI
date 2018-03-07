/*
Nome:      Ajude Vânia
ID:        2498
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   1.014 Bytes
Submissao: 18/06/17 18:07:59
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int find_max_interest(int C, int index, int book_w[], int book_i[], int N_BOOK)
{
    if(C < 0) return INT_MIN;
    if(index == N_BOOK) return 0;
    if(dp[C][index] != -1) return dp[C][index];
    int ans = 0;
    ans = max(ans, find_max_interest(C, index + 1, book_w, book_i, N_BOOK)); // NOT BORROW
    ans = max(ans, find_max_interest(C - book_w[index], index + 1, book_w, book_i, N_BOOK) + book_i[index]); // BORROW
    return dp[C][index] = ans;
}

int main()
{
    int n_book, max_capacity, CASE = 1;

    while(scanf("%d%d", &n_book, &max_capacity) && n_book)
    {
        int book_weight[n_book], book_interest[n_book];

        for(int i = 0; i < n_book; i++)
        {
            scanf("%d%d", &book_weight[i], &book_interest[i]);
        }

        memset(dp, -1, sizeof dp);

        printf("Caso %d: %d\n", CASE++, find_max_interest(max_capacity, 0, book_weight, book_interest, n_book));
    }
}
