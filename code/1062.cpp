#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int train_size;
    int index = 0;

    while( cin >> train_size && train_size != 0 ){

        int coaches[train_size];
        stack<int> train;

        while( cin >> coaches[0] && coaches[0] != 0 ){

            for( int i = 1; i < train_size; i++ ){
                cin >> coaches[i];
            }

            for( int i = 1; i <= train_size; i++ ){

                train.push( i );

                while(  index <= train_size - 1 && !train.empty()  && train.top() == coaches[index] ){
                    train.pop();
                    index++;
                }
            }

            if( train.empty() ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;

                while( !train.empty() ){
                    train.pop();
                }
            }
            index = 0;
        }
        cout << endl;
    }

    return 0;
}
