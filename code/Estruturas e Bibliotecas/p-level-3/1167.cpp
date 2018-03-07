/*
Nome:      Acampamento de Férias
ID:        1167
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.144s
Tamanho:   1,08 KB
Submissao: 18/05/17 21:41:50
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<string,int> si;

int main()
{
    int N;

    while(cin >> N && N)
    {
        vector<si> children;

        for(int i = 0; i < N; i++)
        {
            string name;
            int value;

            cin >> name >> value;

            children.push_back(si(name, value));
        }

        if(N != 1)
        {
            int counter = children[0].second;
            int pos = counter % 2 == 0 ? N : 1;

            while((int)children.size() != 1)
            {
                if(counter % 2 == 0)
                {
                    pos = (pos - counter) % (int)children.size();
                    if(pos < 0) pos += children.size();
                }
                else
                {
                    pos = (pos + counter - 1) % children.size();
                }

                counter = children[pos].second;

                children.erase(children.begin() + pos);
            }
        }

        cout << "Vencedor(a): "<< children[0].first << endl;
    }
}
