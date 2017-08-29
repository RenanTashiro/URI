/*
Nome:      Sequência Lógica 2
ID:        1145
Resposta:  Accepted
Linguagem: C++
Tempo:     0.028s
Tamanho:   473 Bytes
Submissao: 09/01/15 19:58:02
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, c = 0, z = 1;
    cin >> x >> y;

    while(z < y + 1){
            c = 0;
        do{
           if(z != y + 1){
                if(c < x - 1 && z < y){
                cout << z << " ";
                }
                else{
                cout << z;
                }
           }
            c++;
            z++;
        }while(c < x);
            cout << endl;
    }

}
