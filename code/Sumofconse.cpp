#include <iostream>
using namespace std;

int main()
{
    int x, y, aux, total = 0;
    cin >> x >> y;

    if(x > y){
    aux = x;
    x = y;
    y = aux;
    }
    int i = x;
    if(x % 2 == 0){
         x += 1;
         for(i; i < y; i = i + 2){
            total = total + i;
         }
    }
    else if(x % 2 == 1 || x % 2 == -1){
          for(i; i < y; i = i + 2){
             total = total + i;
          }
    }
     cout << total << endl;

}


