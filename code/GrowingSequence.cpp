#include <iostream>
using namespace std;

int main()
{
    int x;

    while(x != 0){
        cin >> x;
        for(int i = 1; i < x + 1; i++){
            if(i != x)
            cout << i << " ";
            else
            cout << i << endl;
        }
    }
}
