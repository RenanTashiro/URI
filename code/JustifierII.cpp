#include <iostream>
#include <ctype.h>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int N, b_len = 0, len = 0;

    while(cin >> N && N != 0){

    if(len > 0)
    cout << endl;

        getchar();
        string line[N], new_line[N];

        for(int i = 0; i < N; i++){

            getline(cin,line[i]);

            len = line[i].size();
            for(int k = 0; k < len; k++){

                if(line[i][k] == ' ' && !isalpha(line[i][k-1])){
                    line[i].erase(line[i].begin()+k);
                    k--;
                }
            }
            len = line[i].size();

                if(line[i][len-1] == ' '){
                    line[i].erase(len-1,1);
                    len--;
                }

            if(b_len < len)
                b_len = len;
        }

        for(int i = 0; i < N; i++)
            cout << setw(b_len) << line[i] << endl;
        b_len = 0;
    }
}
