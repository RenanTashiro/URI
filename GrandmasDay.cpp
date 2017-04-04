#include <iostream>
#include <string>
using namespace std;

int contador(string frase){

    int contador;

    for(int i = 0; i < frase.length(); i++){

    }

}

int main()
{
    int L, C, P, index;
    for(int i = 0; i < 100; i++){

        cin >> L >> C;
        string tabela[C];

        for(int j = 0; j < L; j++){
            cin >> tabela[j];
        }
        cin >> P;
        string words[P];
        int contador[P];

        for(int j = 0; j < P; j++){
            cin >> words[j];
        }

        for(int j = 0; j < C; j++){
            for(int k = 0; k < P; k++){

                index = tabela[j].find(words[k]);
                cout << index << endl;
        }
            }
        /*for(int j = 0; j < P; j++){
            cout << contador[j] << endl;
        }*/
  }
}
