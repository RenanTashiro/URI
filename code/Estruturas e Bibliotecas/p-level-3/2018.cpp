/*
Nome:      Olimpíadas de Natal
ID:        2018
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,48 KB
Submissao: 24/02/16 20:50:49
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

struct Score {
    string country;
    int gold, silver, bronze;
};

int main()
{
    ios::sync_with_stdio(false);

    string modalidade, first, second, third;
    map<string,pair<int,ii>> score;

    while(getline(cin, modalidade))
    {
        getline(cin, first);
        getline(cin, second);
        getline(cin, third);

        score[first].first++;
        score[second].second.first++;
        score[third].second.second++;
    }

    vector<Score> sorted_score;

    for(map<string,pair<int,ii>>::iterator it = score.begin(); it != score.end(); ++it) {
        Score act_score;
        act_score.country = it->first;
        act_score.gold = it->second.first;
        act_score.silver = it->second.second.first;
        act_score.bronze = it->second.second.second;
        sorted_score.push_back(act_score);
    }

    sort(sorted_score.begin(), sorted_score.end(), [](const Score& a, const Score& b) -> bool {
        if(a.gold != b.gold) {
            return a.gold > b.gold;
        } else if(a.silver != b.silver) {
            return a.silver > b.silver;
        } else if(a.bronze != b.bronze) {
            return a.bronze > b.bronze;
        }
        return a.country < b.country;
    });

    cout << "Quadro de Medalhas\n";

    for(auto& s : sorted_score) {
        cout << s.country << ' ' << s.gold << ' ' << s.silver << ' ' << s.bronze << "\n";
    }
}
