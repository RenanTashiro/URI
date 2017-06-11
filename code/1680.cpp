#include <iostream>
#include <string>
using namespace std;

int main()
{
    string comands;

    while( cin >> comands ){

        int x = 310, y = 420;
        int flag = 1; /// 0 = S 1 = L 2 = N 3 = O

        cout << "300 420 moveto\n";
        cout << "310 420 lineto\n";

        for( size_t i = 0; i < comands.size(); i++ ){

            if( comands[i] == 'A' ){
                flag--;
                if( flag < 0 ) flag = 3;
            }
            else{
                flag++;
                if( flag > 3 ) flag = 0;
            }

            switch( flag ){
                case 0: y -= 10; break;
                case 1: x += 10; break;
                case 2: y += 10; break;
                case 3: x -= 10; break;
            }

            cout << x << ' ' << y << " lineto\n";
        }

        cout << "stroke\n";
        cout << "showpage\n";
    }
}
