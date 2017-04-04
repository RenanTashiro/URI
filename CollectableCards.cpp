#include <iostream>
using namespace std;

int mdc(int a, int b){

int aux;

aux = a % b;
if(aux != 0)
    mdc(b,aux);
else
    return b;

}
int main()
{
    int N, F1, F2;
    cin >> N;
    for(int i = 0; i < N; i++){

        cin >> F1 >> F2;

    if(F1 == F2)
        cout << F1 << endl;
    else if(F1 > F2)
        cout << mdc(F1,F2) << endl;
    else
        cout << mdc(F2,F1) << endl;
    }
}
