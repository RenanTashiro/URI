/*
Nome:      Amigos do Habay
ID:        2136
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1.006 Bytes
Submissao: 15/07/16 18:49:39
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<string,int> si;

bool compare(si a, si b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    vector<si> names;
    set<string> cache;
    string name, ans, great;
    int max_so_far = 0;

    while(cin >> name)
    {
        if(name == "FIM")
            break;

        cin >> ans;

        int ians = ans == "YES" ? 1 : 0;

        if(cache.find(name) == cache.end())
        {
            names.push_back(si(name, ians));

            if(ans == "YES" && (int)name.size() > max_so_far)
            {
                max_so_far = (int)name.size();
                great = name;
            }
        }

        cache.insert(name);
    }

    sort(names.begin(), names.end(), compare);

    for(int i = 0; i < (int)names.size(); i++)
        cout << names[i].first << endl;

    cout << "\nAmigo do Habay:\n" << great << endl;
}
