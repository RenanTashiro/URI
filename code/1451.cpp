#include <iostream>
#include <list>
using namespace std;

int main()
{
    string text;
    list<string> correct_test;

    while( cin >> text ){

        int ini = 0;
        unsigned i;
        bool flag = true;

        for( i = 0; text[i] != '\0'; i++ ){
            if( text[i] == '[' ){
                text[i] = '\0';
                flag ? correct_test.push_front( &text[ini] ) : correct_test.push_back( &text[ini] );
                ini = i + 1;
                flag = true;
            }
            else if( text[i] == ']'){
                text[i] = '\0';
                !flag ? correct_test.push_back( &text[ini] ) : correct_test.push_front( &text[ini] );
                ini = i + 1;
                flag = false;
            }
        }

        if( flag )
            correct_test.push_front( &text[ini] );
        else
            correct_test.push_back( &text[ini] );

        for( list<string>::iterator it = correct_test.begin(); it != correct_test.end(); ++it )
            cout << *it;

        if( !correct_test.empty() )
            cout << '\n';

        correct_test.clear();
    }
}

