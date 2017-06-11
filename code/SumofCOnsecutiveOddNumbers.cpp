#include <iostream>
using namespace std;

int main()
{
    int x, y, aux, Soma=0, i;
    cin >> x >> y;

    if(x > y){
    aux = x;
    x = y;
    y = aux;
    }
x+=1;

for(i = x ; i < y; i++){
if(i%2 != 0)
Soma += i;}

    cout << Soma << endl;
}
