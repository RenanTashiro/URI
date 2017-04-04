#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int DA, DB;
    char BA[32], BB[32];

    while(cin >> DA >> DB){

    itoa(DA,BA,2);
    itoa(DB,BB,2);

    DA = (int)atoi(BA);
    DB = (int)atoi(BB);

    cout << DA << endl << DB;
    }
}
