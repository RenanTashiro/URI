/*
Nome:      URI - Uireb Rhom uin Iavas
ID:        2181
Resposta:  Accepted
Linguagem: C++
Tempo:     0.172s
Tamanho:   1,19 KB
Submissao: 13/08/17 16:34:12
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,double> id;

int main()
{
    int N, D;

    cin >> N >> D;

    vector<id> elf(N);

    for(int i = 0; i < N; i++)
        cin >> elf[i].first;

    for(int i = 0; i < N; i++)
        cin >> elf[i].second;

    sort(elf.begin(), elf.end());

    int n_public = 0, max_elf_in_public = 0, min_age_idx = 0, n = 0;
    double max_rent = 0.0, rent = 0.0;

    for(int max_age_idx = 0; max_age_idx < N; max_age_idx++)
    {
        if(elf[max_age_idx].first - elf[min_age_idx].first > D)
        {
            n_public++;
            max_elf_in_public = max(max_elf_in_public, n);
            max_rent = max(max_rent, rent);

            while(elf[max_age_idx].first - elf[min_age_idx].first > D)
            {
                rent -= elf[min_age_idx].second;
                min_age_idx++;
                n--;
            }
        }

        rent += elf[max_age_idx].second;
        n++;
    }

    n_public++;
    max_elf_in_public = max(max_elf_in_public, n);
    max_rent = max(max_rent, rent);

    cout << fixed << setprecision(2) << n_public << ' ' << max_elf_in_public << ' ' << max_rent << endl;
}
