#include <iostream>
using namespace std;

void comparar(void){



}

int main()
{
    int T, N, contador, ja_foi;
    cin >> T;
    for(int i = 0; i < T; i++){

        cin >> N;
        int S[N], excecao[N];
        contador = N;

        for(int y = 0; y < N; y++){

            cin >> S[y];

            for(int z = 0; z < y; z++){
                if(S[y] == S[y - (z + 1)]){
                    contador--;
                    break;
                }
            }

        }
            cout << contador << endl;
        }

}
