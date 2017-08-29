/*
Nome:      Acerte o Presente
ID:        2478
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   626 Bytes
Submissao: 19/04/17 20:20:21
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;

    cin >> X;

    map<string,set<string>> wish_list;
    string name, opt1, opt2, opt3;

    for(int i = 0; i < X; i++)
    {
        cin >> name >> opt1 >> opt2 >> opt3;

        set<string> wish = {opt1, opt2, opt3};

        wish_list[name] = wish;
    }

    while(cin >> name >> opt1)
    {
        if(wish_list[name].find(opt1) != wish_list[name].end()) {
            cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
        }
        else {
            cout << "Tente Novamente!" << endl;
        }
    }
}
