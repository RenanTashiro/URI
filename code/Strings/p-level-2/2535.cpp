/*
Nome:      Feira de Adoção
ID:        2535
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   1,33 KB
Submissao: 14/05/17 16:09:52
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int ans = 0;

        getchar();

        for(int i = 0; i < N; i++)
        {
            string race, specie, name, dump;

            getline(cin, race);
            getline(cin, specie);
            getline(cin, name);
            getline(cin, dump);

            if(race == "cachorro")
            {
                if(name.find(' ') != string::npos)
                {
                    bool check = true, isvalid = false;

                    for(int j = 0; j < (int)name.size(); j++)
                    {
                        if(check)
                        {
                            if(name[j] == specie[0])
                            {
                                isvalid = true;
                                break;
                            }

                            check = false;
                        }

                        if(name[j] == ' ')
                        {
                            check = true;
                        }
                    }

                    if(isvalid)
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << endl;
    }
}
