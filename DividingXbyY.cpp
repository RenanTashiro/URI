#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int z;
    cin >> z;
    float x[z], y[z], divisao;

    for(int i = 0; i < z; i++){
            cin >> x[i] >> y[i];
        if(y[i] != 0){
            cout << setiosflags(ios::fixed) << setprecision(1) <<x[i] / y[i] << endl;
        }
        else{
            cout << "divisao impossivel" << endl;
        }
    }



}
