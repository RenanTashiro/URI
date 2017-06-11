#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int NC;
    int  n, c;

    cin >> NC;

    for( int i = 0; i < NC; i++ ){

        cin >> n >> c;

        vector<int> circle;

        for( int j = 1; j <= n; j++ ){
            circle.push_back( j );
        }

        int index = c;

        while( circle.size() != 1 ){

            while( index > circle.size() ){
                index -= circle.size();
            }

            circle.erase( circle.begin()+( index - 1 )  );
            index += c - 1;
        }
        cout << "Case "<< i + 1 <<": " << circle[0] << endl;
    }

    return 0;
}
