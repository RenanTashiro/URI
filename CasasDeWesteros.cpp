#include <iostream>
#include <cstdlib>
#include <list>
#define MAX 1200
using namespace std;

bool flag = true;

void DST( list<int>* arr, const int cur_member, size_t members_number , bool member[], bool visited[] )
{
    visited[cur_member] = true;

    if( arr[cur_member].size() != members_number ){
        flag = false;
        return;
    }

    for( list<int>::iterator it = arr[cur_member].begin(); it != arr[cur_member].end(); ++it ){
        if( member[*it] == false ){
            flag = false;
            return;
        }
        if( !visited[*it] ){
            DST( arr, *it, members_number, member, visited );
        }
    }
}

int cmp( const void* a, const void* b ){
    return *( int* )b - *( int* )a;
}

int main()
{
    int N;

    cin >> N;

    list<int> houses[N];
    char answer;

    for( int i = 0; i < N; i++ ){
        for( int j = 0; j < N; j++ ){
            cin >> answer;
            if( answer == 'S' ){
                houses[i].push_back( j );
            }
        }
    }

    int houses_number = 0, houses_number_members[N], idx = 0, counter = 0;
    bool visited[MAX] = {false};

    for( int i = 0; i < N && counter < N; i++ ){
        bool vis[MAX] = {false};

        if( visited[i] == false ){
            houses_number++;
            houses_number_members[idx++] = houses[i].size();
        }
        for( list<int>::iterator it = houses[i].begin(); it != houses[i].end(); ++it ){
            if( !visited[*it] ){
                visited[*it] = true;
                counter++;
            }
        }

        DST( houses, i, houses[i].size(), visited, vis );
    }

    if( flag ){
        cout << houses_number << endl;
        qsort( houses_number_members, idx, sizeof( int ), cmp );
        for( int i = 0; i < idx; i++ ){
            if( i == 0 )
                cout << houses_number_members[i];
            else
                cout << ' ' << houses_number_members[i];
        }
    }
    else
        cout << "-1";

    cout << '\n';
}
