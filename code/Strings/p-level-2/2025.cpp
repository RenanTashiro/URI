/*
Nome:      Joulupukki
ID:        2025
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   906 Bytes
Submissao: 24/02/16 20:49:44
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++)
    {
        string text;


        getline(cin, text);

        istringstream iss(text);
        vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{}};
        bool flag = false;

        for(auto& str : tokens) {
            if(str.size() == 10 && str.find("oulupukk") != string::npos) {
                str[0] = 'J';
                str[9] = 'i';
            }
            else if(str.size() == 11 && str[10] == '.' && str.find("oulupukk") != string::npos) {
                str[0] = 'J';
                str[9] = 'i';
            }
            if(flag) cout << ' ';
            else flag = true;
            cout << str;
        }

        cout << endl;
    }
}
