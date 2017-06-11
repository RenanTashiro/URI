#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int N, cond = 0, pos, len;
    cin >> N;
    getchar();
    char temp;
    string dieta, breakfast, lunch, break_lunch;

    for(int i = 0; i < N; i++){

        getline(cin,dieta);getline(cin,breakfast);getline(cin,lunch);

        if(dieta == " "){
            cout << endl;
            continue;
        }

        break_lunch = breakfast + lunch;

        for(int k = 0; k < break_lunch.size(); k++){
                pos = dieta.find(break_lunch[k]);
            if(pos != string::npos)
                dieta.erase(dieta.begin()+pos);
            else if(break_lunch == "  ")
                break;
            else{
                cout << "CHEATER" << endl;
                cond = 1;
                break;
            }
        }
        if(cond == 1){
            cond = 0;
            continue;
        }
        len = dieta.size();

        for(int k = 0; k < len - 1; k++){
            for(int l = k + 1; l < len; l++){
                if(dieta[k] > dieta[l]){
                    temp = dieta[k];
                    dieta[k] = dieta[l];
                    dieta[l] = temp;
                }
            }
        }
        cout << dieta << endl;
    }
}
