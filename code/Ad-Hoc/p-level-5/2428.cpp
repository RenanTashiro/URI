/*
Nome:      Capital
ID:        2428
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,8 KB
Submissao: 15/06/17 16:23:46
*/
#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> find_fac(int n)
{
    vector<pair<int,int>> fac;

    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            fac.push_back({i, n / i});
        }
    }

    return fac;
}

int main()
{
    int A1, A2, A3, A4;

    cin >> A1 >> A2 >> A3 >> A4;

    vector<pair<int,int>> fac1 = find_fac(A1);
    vector<pair<int,int>> fac2 = find_fac(A2);
    vector<pair<int,int>> fac3 = find_fac(A3);
    vector<pair<int,int>> fac4 = find_fac(A4);
    vector<pair<int,int>> facs;
    set<int> values;

    facs.insert(facs.end(), fac1.begin(), fac1.end());
    facs.insert(facs.end(), fac2.begin(), fac2.end());
    facs.insert(facs.end(), fac3.begin(), fac3.end());
    facs.insert(facs.end(), fac4.begin(), fac4.end());
    values.insert(A1);
    values.insert(A2);
    values.insert(A3);
    values.insert(A4);

    int total = A1 + A2 + A3 + A4;
    bool possible = false;

    for(int i = 2; i <= sqrt(total); i++)
    {
        if(total % i == 0)
        {
            int X = i, Y = total / i;

            for(auto fac : facs)
            {
                int one = (X - fac.first) * (Y - fac.second);
                int two = (fac.first) * (Y - fac.second);
                int three = (X - fac.first) * (fac.second);
                int four = (fac.first) * (fac.second);

                set<int> tvalues;

                tvalues.insert(one);
                tvalues.insert(two);
                tvalues.insert(three);
                tvalues.insert(four);

                if(values == tvalues)
                {
                    possible = true;
                    break;
                }
            }
        }
    }

    cout << (possible ? "S" : "N") << endl;
}