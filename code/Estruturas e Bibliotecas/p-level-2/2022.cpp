/*
Nome:      Presentes de Natal
ID:        2022
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,13 KB
Submissao: 24/02/16 20:51:04
*/
#include <bits/stdc++.h>

using namespace std;

struct Present {
    string name;
    double price;
    int pref;
};

int main()
{
    ios::sync_with_stdio(false);

    int Q;
    string name;

    while(cin >> name >> Q)
    {
        vector<Present> present_list;

        while(Q--) {
            Present present;
            cin.ignore();
            getline(cin, present.name);
            cin >> present.price >> present.pref;
            present_list.push_back(present);
        }

        sort(present_list.begin(), present_list.end(), [](const Present& first, const Present& second) -> bool {
            if(first.pref != second.pref) {
                return first.pref > second.pref;
            }
            else if(first.price != second.price) {
                return first.price < second.price;
            }
            return first.name < second.name;
        });

        cout << "Lista de " << name << "\n";

        for(auto& present : present_list) {
            cout << fixed << setprecision(2) << present.name << " - R$" << present.price << "\n";
        }

        cout << endl;
    }
}
