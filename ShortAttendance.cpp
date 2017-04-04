#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, n_estudantes, index[105], pres = 0, aus = 0;
    cin >> N;
    string presenca;

    for(int i = 0; i < N; i++){

        cin >> n_estudantes;
        string nomes[n_estudantes];
        int contador[n_estudantes];

        for(int k = 0; k < n_estudantes; k++)
            cin >> nomes[k];

        for(int k = 0; k < n_estudantes; k++){
            cin >> presenca;
            for(int l = 0; l < presenca.size(); l++)
                switch(presenca[l]){
                    case 'A': ++aus; break;
                    case 'P': ++pres; break;
                }
            if(pres <= (aus+pres) * 0.75)
                index[k] = 1;
        }
        for(int k = 0; k < n_estudantes; k++){
            if(index[k] == 1)
                cout << nomes[k] << endl;
        }
    }
}
