#include <iostream>
#include <string>
using namespace std;

int main()
{
    char D;
    string N, new_value;
    int aux = 0;

    while(cin >> D >> N && D != '0' && N != "0"){

        for(int i = 0; i < N.length(); i++){
            if(aux == 0 && N[i] != '0' && N[i] != D)
                aux = 1;
            if(N[i] != D && aux != 0)
                new_value += N[i];
            else if(aux == 0 && i == N.length() - 1)
                new_value = "0";
        }
    cout << new_value << endl;
    new_value.clear();
    aux = 0;
    }
}
