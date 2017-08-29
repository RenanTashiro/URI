/*
Nome:      Soma de Pares Consecutivos
ID:        1159
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   544 Bytes
Submissao: 10/01/15 10:58:52
*/
#include <iostream>
using namespace std;

int main()
{
    int x, total, i;

    do{cin >> x;

    total = 0;
    i = 0;

    if(x == 0)
        return 0;

        if(x % 2 == 0)
        while(i < 5){
            total += x;

            i++;
            x += 2;
        }
        else{
        while(i < 5){
            if(x % 2 == 0){
                total += x;
                i++;
            }
            x++;
        }
        }
         cout << total << endl;
    }while(x != 0);
    cout << endl;
}
