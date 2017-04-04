#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N, len2, len1, aux1, aux2;
    string palavra1, palavra2;
    cin >> N;

    for(int i = 0; i < N; i++){

    cin >> palavra1 >> palavra2;

    len1 = palavra1.length();
    len2 = palavra2.length();
    aux1 = 0;
    aux2 = 0;

    for(int i = 0; i < len1 || i < len2; i++){
        if(aux1 < len1){
            cout << palavra1[i];
            aux1++;
        }
        if(aux2 < len2){
            cout << palavra2[i];
            aux2++;
        }
    }
    cout << endl;
    }
}



