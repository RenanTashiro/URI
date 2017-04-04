#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

struct student{
    vector<string> name;
    vector<int> number;
};

typedef struct student Student;

int main()
{
    int N;
    Student child;

    while( cin >> N && N != 0 ){

        int tmp_number;
        string tmp_name;

        for( int i = 0; i < N; i++ ){
            cin >> tmp_name >> tmp_number;
            child.name.push_back( tmp_name );
            child.number.push_back( tmp_number );
        }

        int index = 0;
        int leap = child.number[index];

        while( child.name.size() != 1 ){

            if( ( leap & 1 ) != 1 ){
                leap %= child.number.size();
                int aux = ( index - leap < 0 ) ?  child.name.size() - index - leap : index - leap;
                if( aux == -1){ aux = child.number.size() - 1;}
                cout << "Ierase " << child.name[aux] << endl;
                child.name.erase( child.name.begin() + aux );
                leap = child.number[aux];
                index = aux;
                child.number.erase( child.number.begin() + aux );

            }
            else{
                leap %= child.number.size();
                int aux = ( leap == 0 ) ? index - 1 : leap;
                if( aux == -1){ aux = child.number.size() - 1;}
                cout << "Perase & leap " << child.name[aux] << " " << aux << endl;
                child.name.erase( child.name.begin() + aux );
                leap = child.number[aux];
                index = aux;
                child.number.erase( child.number.begin() + aux );
            }
        }

        cout << "Vencedor(a): "<< child.name[0] <<"\n";
        child.name.clear();
        child.number.clear();
    }
}
