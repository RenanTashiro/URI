#include <bits/stdc++.h>

#define _CORRECT_ 1
#define _MISSPELLING_ 2
#define _UNKNOWN_ 3

using namespace std;

bool checkDict( string dictionary[], string target, int n )
{
    for( int i = 0; i < n; i++ ) {
        if( dictionary[i] == target ) {
            return true;
        }
    }
    return false;
}

bool checkRuleOne( string dictionary, string target, int n, string& cor )
{
    size_t dic = dictionary.size(), tar = target.size();
    if( abs( ( int ) dic - ( int ) tar ) == 1 ) {
        unsigned counter = 0;
        for( size_t j = 0, k = 0; j < tar && k < dic; j++, k++ ) {
            if( dictionary[k] != target[j] ) {
                if( dic > tar ) --j;
                else            --k;
            }
            else {
                counter++;
            }
        }
        if( ( tar < dic && counter == tar ) || ( tar > dic && counter == dic ) ) {
            cor = dictionary;
            return true;
        }
    }
    return false;
}

bool checkRuleTwo( string dictionary, string target, int n, string& cor )
{
    size_t tar = target.size();
    unsigned counter = 0;
    if( tar == dictionary.size() ) {
        for( size_t j = 0; j < tar; j++ ) {
            if( dictionary[j] == target[j] ) {
                counter++;
            }
        }
    }
    if( counter == tar - 1 ) {
        cor = dictionary;
        return true;
    }
    return false;
}

bool checkRuleThree( string dictionary, string target, int n, string& cor )
{
    size_t tar = target.size();
    unsigned counter = 0;
    bool inc = false;
    if( tar == dictionary.size() ) {
        for( size_t j = 0; j < tar; j++ ) {
            if( dictionary[j] == target[j] ) {
                counter++;
            }
            else if( j > 0 && !inc && dictionary[j-1] == target[j] && dictionary[j] == target[j-1] ) {
                inc = true;
                counter += 2;
            }
        }
    }
    if( counter == tar ) {
        cor = dictionary;
        return true;
    }
    return false;
}

bool checkRules( string dictionary[], string target, int n, string& cor )
{
    for( int i = 0; i < n; i++ ) {
        if( checkRuleOne( dictionary[i], target, n, cor ) ) {
            return true;
        }
        else if( checkRuleTwo( dictionary[i], target, n, cor ) ) {
            return true;
        }
        else if( checkRuleThree( dictionary[i], target, n, cor ) ) {
            return true;
        }
    }

    return false;
}

int main()
{
    int N;

    while( cin >> N )
    {
        string dictionary[N];

        for( int i = 0; i < N; i++ ) {
            cin >> dictionary[i];
        }

        int Q;

        cin >> Q;

        while( Q-- )
        {
            string word, output = "";

            cin >> word;

            int ans = _UNKNOWN_;

            if( checkDict( dictionary, word, N ) ) {
                ans = _CORRECT_;
            }
            else if( checkRules( dictionary, word, N, output ) ) {
                ans = _MISSPELLING_;
            }

            switch( ans ) {
                case _CORRECT_: cout << word << " is correct\n"; break;
                case _MISSPELLING_: cout << word << " is a misspelling of " << output << "\n"; break;
                case _UNKNOWN_: cout << word << " is unknown\n"; break;
             }
        }
    }

    return 0;
}
