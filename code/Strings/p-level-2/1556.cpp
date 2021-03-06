/*
Nome:      Removendo Letras
ID:        1556
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.040s
Tamanho:   856 Bytes
Submissao: 15/11/15 15:35:04
*/
#include <bits/stdc++.h>

using namespace std;

set<string> combinations;

void rmLetters(string str, string substring)
{
    bool gone[26] = {false};
    for(size_t i = 0; i < str.size(); i++) {
        int idx = str[i] - 97;
        if(gone[idx] == false) {
            gone[idx] = true;
            string sub(substring + str[i]);
            combinations.insert(sub);
            rmLetters(str.substr(i+1), sub);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);

    string word;

    while(cin >> word)
    {
        combinations.clear();
        rmLetters(word, "");

        //ofstream out("1556.out");

        for(auto combination : combinations) {
            //out << combination << "\n";
            cout << combination << "\n";
        }

        cout << "\n";
    }

    return 0;
}
