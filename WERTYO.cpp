#include <iostream>
using namespace std;

int main()
{
    string statament;
    char telcas[50] {"`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"}, teclas_aux[50];

    while(getline(cin,statament)){

        for(int i = 0; statament[i] != '\n'; i++){

            if(statament[i] == ' ')
                cout << " ";
            teclas_aux[i] = statament[i];

        }
    }
}
