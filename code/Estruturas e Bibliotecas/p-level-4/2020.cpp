/*
Nome:      Elfos e seus Códigos
ID:        2020
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.048s
Tamanho:   1,28 KB
Submissao: 01/03/16 13:19:24
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

    int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
	int N, lista = 1;

	while(cin >> N)
	{
		if(lista > 1)
		{
			cout << endl;
		}
		
		cin.ignore();
		
	    vector<string> ans_vet;
	    
	    vector<int> gnomo(vet, vet+26) ;
	    string duende = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	    
		while(N--)
        {
            int num;
            string row, ans;

			getline(cin, row);

            istringstream iss(row);

            while(iss >> num)
            {
                if(num-- == 27)
                {
                    ans += " ";
                    continue;
                }

                int n = gnomo[num];

                char c = duende[n];

                gnomo.erase(gnomo.begin()+num);
                gnomo.push_back(n);

                duende.erase(duende.begin()+n);
                duende.push_back(c);

                ans += c;
            }

            ans_vet.push_back(ans);
		}

		sort(ans_vet.begin(), ans_vet.end());

		cout << "LISTA #" << lista++ << ":\n";

		for(auto str : ans_vet)
        {
            cout << str << endl;
        }
	}

}
