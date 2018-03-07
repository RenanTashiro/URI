/*
Nome:      A Última Criança Boa
ID:        2023
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   569 Bytes
Submissao: 24/02/16 20:48:56
*/
#include <bits/stdc++.h>

using namespace std;

string alltolower(const string& str)
{
    string strl = "";
    int len = (int) str.size();

    for(int i = 0; i < len; i++) {
        strl += tolower(str[i]);
    }

    return strl;
}

int main()
{
    string nome;
    vector<string> names;
    map<string,string> original;

    while(getline(cin, nome))
    {
        names.push_back(alltolower(nome));
        original[names.back()] = nome;
    }

    sort(names.begin(), names.end());

    cout << original[names.back()] << "\n";
}
