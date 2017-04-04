#include <iostream>
using namespace std;

int main()
{
    int n[100], aux = 0;
    for(int i = 0; i < 100; i++){
        cin >> n[i];
    }
    for(int u = 0; u < 100; u++){
        if(n[0]>n[u]){
            n[0] = n[0];
            aux = aux;
        }
        else{
            n[0] = n[u];
            aux = u + 1;
        }
    }
    cout << n[0] << endl << aux << endl;

}
