#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int calculate( char op, long long int lvalue, long long int &rvalue )
{
    switch( op ){
        case '+': rvalue += lvalue; break;
        case '-': rvalue -= lvalue; break;
        case '*': rvalue *= lvalue; break;
        case '/':
            if( lvalue != 0 ){
                rvalue /= lvalue;
            }
            else{
                return 0;
            }
    }
    return 1;
}

int main()
{
    string str;

    while( getline( cin , str ) ){

        int index = str.size() - 1;
        long long rvalue, lvalue = 0, llvalue = 0;
        bool flag = true, byZero = false;

        if( isdigit( str[index] ) && index + 1 % 2 != 0 ){
            rvalue = str[index] - 48;
            index -= 2;

            while( index >= 0 ){

                if( isdigit( str[index ] ) ){
                    lvalue = str[index] - 48;
                    index -= 2;
                }
                else{
                    cout << "Invalid expression.\n";
                    flag = false;
                    break;
                }
                /**/
                if( isdigit( str[index] ) ){
                    llvalue = str[index] - 48;
                    index -= 2;
                    if( !isdigit( str[index] ) ){
                        if( !calculate( str[index], llvalue, lvalue ) ){
                            byZero = true;
                        }
                    }
                    else{
                        cout << "Invalid expression.\n";
                        flag = false;
                        break;
                    }
                    index -= 2;
                }
                /**/

                if( !isdigit( str[index] ) && index >= 0 && !calculate( str[index], lvalue, rvalue ) ){
                    byZero = true;
                }
                else if( index < 0 || isdigit( str[index ] ) ){
                    cout << "Invalid expression.\n";
                    flag = false;
                    break;
                }

                index -= 2;
            }

            if( flag && !byZero ){
                cout << "The answer is " << rvalue << ".\n";
            }
            else if( flag ){
                cout << "Division by zero.\n";
            }
        }
        else{
            cout << "Invalid expression.\n";
        }
    }

    return 0;
}
