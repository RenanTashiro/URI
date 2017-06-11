#include <iostream>
using namespace std;

int main()
{
    int A, B, carry_operation = 0, aux = 0, len = 0, d_len;

    while(cin >> A >> B && A != 0 || B != 0){

    d_len = A;

        for(int i = 0; d_len != 0 != 0; i++){
            d_len /= 10;
            len++;
        }

        for(int i = 0; i < len || aux == 1; i++){
            if((A % 10) + (B % 10) + aux >= 10){
                carry_operation++;
                aux = 1;
            }
            else
                aux = 0;

            A /= 10;
            B /= 10;
        }
            switch(carry_operation){

            case 0:
                cout << "No carry operation." << endl; break;
            case 1:
                cout << "1 carry operation." << endl; break;
            default:
                cout << carry_operation << " carry operations." << endl;
            }

        len = carry_operation = aux = 0;
    }
}
