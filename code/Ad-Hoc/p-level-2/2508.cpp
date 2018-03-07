/*
Nome:      Guru da Sorte
ID:        2508
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   847 Bytes
Submissao: 21/04/17 11:03:46
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;

    while(getline(cin, name))
    {
        int first_step = 0;

        for(unsigned i = 0; i < name.size(); i++)
        {
            if(isalpha(name[i]))
            {
                name[i] = tolower(name[i]);
                first_step += (name[i] - 'a') % 9 + 1;
            }
        }

        int second_step;

        while((int)(log10(first_step) + 1) > 1)
        {
            int length = (int)(log10(first_step) + 1);

            second_step = 0;

            for(int i = 0; i < length; i++)
            {
                second_step += (first_step % (int)ceil(pow(10, i + 1))) / (int)ceil(pow(10, i));
            }

            first_step = second_step;
        }

        cout << second_step << endl;
    }
}
