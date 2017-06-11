#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N, counter = 0;
    string tree_name;

    map<string,int> tree;
    map<string,int>::iterator iter;

    cin >> N;
    cin.ignore();

    for( int i = 0; i < N; i++ ){

        if( i > 0 ) cout << endl;
        else cin.ignore();


        while( getline( cin, tree_name ) && ( tree_name.size() != 0 || counter == 0 ) ){
            tree[ tree_name ]++;
            counter++;
        }

        cout.precision(4);

        for( iter = tree.begin(); iter != tree.end(); iter++ ){
            cout << iter->first << " " << fixed << ( iter->second * 100.00 ) / counter << endl;
        }

        tree.clear();
        counter = 0;
    }
}
