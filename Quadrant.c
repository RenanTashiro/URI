#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while(x != 0 && y != 0){
        if(x > 0 && y > 0)
            cout << "primeiro" << endl;
        if(x < 0 && y > 0)
            cout << "segundo" << endl;
        if(x < 0 && y < 0)
            cout << "terceiro" << endl;
        if(x > 0 && y < 0)
            cout << "quarto" << endl;
    }

}
