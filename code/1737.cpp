#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

template<typename A, typename B>
pair<B,A> flip_pair(const pair<A,B> &p)
{
    return pair<B,A>(p.second, p.first);
}

template<typename A, typename B>
multimap<B,A> flip_map(const map<A,B> &src)
{
    multimap<B,A> dst;
    transform(src.begin(), src.end(), inserter(dst, dst.begin()),
                   flip_pair<A,B>);
    return dst;
}

int main()
{
    int n, counter = 0;

    while( cin >> n && n != 0 ){

        cin.ignore();

        string line = "\0", tmp;
        map< string,int > frequency;

        for( int i = 0; i < n; i++ ){
            getline( cin, tmp );
            line += tmp;
        }

        for( unsigned j = 0; j < line.size() - 1; j++ ){
            tmp = line.substr( j , 2 );
            frequency[tmp]++;
            counter++;
        }

        int index = 0;
        multimap< int,string > sorted_frequency = flip_map( frequency );
        map< int,string >::reverse_iterator it;
        it = sorted_frequency.rbegin();

        while( index++ < 5 ){
            cout << it->second << ' ' << it->first << ' '<< fixed << setprecision( 6 ) << ( double ) it->first / counter << endl;
            it++;
        }

        cout << '\n';

        counter = 0;
    }
}
