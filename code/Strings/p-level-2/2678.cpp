/*
Nome:      Discagem de Voz
ID:        2678
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   666 Bytes
Submissao: 19/09/17 13:50:57
*/
#include <bits/stdc++.h>
using namespace std;

int dict[] {
    '2', '2', '2', '3', '3', '3',
    '4', '4', '4', '5', '5', '5',
    '6', '6', '6', '7', '7', '7', '7',
    '8', '8', '8', '9', '9', '9', '9'
};

int main()
{
    string number;

    while(getline(cin, number))
    {
        string real_number = "";

        for(int i = 0; number[i]; i++)
        {
            if(isalpha(number[i]))
                real_number += dict[tolower(number[i])-'a'];
            else if(isdigit(number[i]) || number[i] == '*' || number[i] == '#')
                real_number += number[i];
        }

        cout << real_number << endl;
    }
}
