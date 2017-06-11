#include <iostream>
using namespace std;

int main()
{
    int m, n;

    do{
    cin >> m >> n;

    if(m > n){
        cout << "Decrescente" << endl;
    }
    if(m < n){
        cout << "Crescente" << endl;
    }

    }while(m != n);

}
