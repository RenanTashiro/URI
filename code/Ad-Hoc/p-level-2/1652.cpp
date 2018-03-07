/*
Nome:      Deli Deli
ID:        1652
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,1 KB
Submissao: 22/11/15 12:12:59
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int L, N;

    cin >> L >> N;

    map<string,string> irregular;

    for(int i = 0; i < L; i++) {
        string singular, plural;
        cin >> singular >> plural;
        irregular[singular] = plural;
    }

    for(int i = 0; i < N; i++) {
        string word, irr;
        cin >> word;
        irr = irregular[word];
        if(irr != "") {
            cout << irr << "\n";
        }
        else {
            int lst = word.size()-1;
            string consoante = "aeiou";
            if(word[lst] =='y' && consoante.find(word[lst-1]) == string::npos) {
                word[lst] = 'i';
                word += "es";
            }
            else if(word[lst] =='o' || word[lst] == 's' || word[lst] == 'x' ||
                   ( (word[lst-1] == 'c' || word[lst-1] == 's' ) && word[lst] == 'h' ) ) {
                word += "es";
            }
            else{
                word += "s";
            }
            cout << word << "\n";
        }
    }

    return 0;
}