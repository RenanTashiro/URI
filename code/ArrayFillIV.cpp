#include <iostream>
using namespace std;

int main()
{
    int N[15], par[5], impar[5], e = 0 , o = 0;

    for(int i = 0; i < 15; i++){

        cin >> N[i];

    if(N[i] % 2 == 0){

    par[e] = N[i];
    e++;
    }
    if(N[i] % 2 != 0){

    impar[o] = N[i];
    o++;
    }
    if(o == 5 || i == 14){
    for(int aux2 = 0; aux2 < o; aux2++){
    cout << "impar[" << aux2 << "] = " << impar[aux2] << endl;
    }
    o = 0;
    }
    if(e == 5 || i == 14){
    for(int aux1 = 0; aux1 < e; aux1++){
    cout << "par[" << aux1 << "] = " << par[aux1] << endl;
    }
    e = 0;
    }
}
}
