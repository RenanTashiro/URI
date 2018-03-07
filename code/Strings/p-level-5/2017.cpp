/*
Nome:      Seis Strings
ID:        2017
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.028s
Tamanho:   794 Bytes
Submissao: 11/01/18 12:39:30
*/
#include <bits/stdc++.h>
using namespace std;

int edit_distance(string str1, string str2, int m, int n)
{
	int dist = 0;
	
	for(int i = 0; i < m; i++)
		if(str1[i] != str2[i]) dist++;

    return dist;
}

int main()
{
    string const_str, str;
    int k, ans_index = 0, edit_dist = INT_MAX;

    cin >> const_str >> k;

    for(int i = 0; i < 5; i++)
    {
        cin >> str;

        int ans = edit_distance(
            const_str, str, (int)const_str.size(), (int)str.size()
        );

        if(ans < edit_dist)
        {
            ans_index = i + 1;
            edit_dist = ans;
        }
    }

    if(edit_dist > k)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans_index << '\n' << edit_dist << '\n';
    }
}

