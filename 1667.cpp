#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word[10000];
    size_t index = 0;

    while( cin >> word[index++] );

    int counter = 0;

    for( unsigned i = 0; i < index - 1; i++ ){

        if( word[i].compare( "<br>" ) == 0 ){
            counter = 0;
            cout << '\n';
        }
        else if( word[i].compare( "<hr>" ) == 0 ){
            if( counter != 0 ) { cout << '\n'; counter = 0; }
            cout << "--------------------------------------------------------------------------------\n";
        }
        else{
            counter += word[i].size() + 1;
            if( counter == word[i].size() + 1 ) cout << word[i];
            else if( counter > 80 ){ counter = word[i].size() + 1; cout << '\n' << word[i]; }
            else{ cout << ' ' << word[i]; }
        }
    }

    cout << '\n';
}

