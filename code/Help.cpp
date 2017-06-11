#include <iostream>
using namespace std;

int main()
{
    int N, S = 0, P = 0, minutos;
    char prob;
    string CE;

    while(cin >> N && N != 0){
            int cont[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i = 0; i < N; i++){
            cin >> prob >> minutos >> CE;

            if(CE == "correct"){
                S +=1;
                P += minutos;
                P += cont[prob-65] * 20;
            }
            else
                cont[prob-65] +=1;
        }
        cout << S << " " << P << endl;
        S = P = 0;

    }
}
