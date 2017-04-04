#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int T, one_point = 0, two_point = 0, len = -1, cond = 0, fin = 0;
    cin >> T;
    getchar();
    string whisper, team_one, team_two;

    for(int i = 0; i < T; i++){

        getline(cin,whisper);
        getline(cin,team_one);
        getline(cin,team_two);

        len = whisper.size();

        for(int j = 0; j < len; j++){
            if(whisper[j] == team_one[j]){
                one_point++;
            }
            else
                cond = 3;
            if(whisper[j] == team_two[j]){
                two_point++;
                if(cond == 3 && fin == 0)
                    fin = 2;
            }
            else if(fin == 0 && cond != 3)
                fin = 1;
        }
            if(one_point > two_point)
                cout << "Instancia " << i + 1 << endl << "time " << 1 << endl << endl;
            else if(one_point < two_point)
                cout << "Instancia " << i + 1 << endl << "time " << 2 << endl << endl;
            else if(one_point == two_point){
                if(fin == 1)
                    cout << "Instancia " << i + 1 << endl << "time " << 1 << endl << endl;
                else if(fin == 2)
                    cout << "Instancia " << i + 1 << endl << "time " << 2 << endl << endl;
                else
                    cout << "Instancia " << i + 1 << endl << "empate" << endl << endl;
            }
    one_point = two_point = cond = fin = 0;
    }
}
