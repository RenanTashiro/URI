/*
Nome:      Decodificando o Texto
ID:        2671
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,07 KB
Submissao: 19/09/17 20:52:28
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string text;

    while(cin >> N && N)
    {
        getchar();
        getline(cin, text);

        vector<int> index = {1};
        int value = 2;

        for(int i = 2; i < 1000 && value <= N; i *= 2)
        {
            vector<int> idx, concat;

            for(int j = 0; j < i && value <= N; j++)
                idx.push_back(value++);

            for(int j = 0, k = 0; j < (int)idx.size() || k < (int)index.size(); j++, k++)
            {
                if(j < (int)idx.size())
                    concat.push_back(idx[j]);
                if(k < (int)index.size())
                    concat.push_back(index[j]);
            }

            concat.push_back(idx[i-1]);
            index = concat;
        }

        vector<pair<int,char>> ans;

        for(int i = 0; i < N; i++)
            ans.push_back({index[i], text[i]});

        sort(ans.begin(), ans.end());

        for(auto i : ans)
            cout << i.second;

        cout << endl;
    }
}
