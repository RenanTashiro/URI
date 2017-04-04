#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int compare(string text){

    stringstream ss(text);
    long long int strAsInt;
    ss >> strAsInt;

    if(strAsInt >= 2147483648){
        return 1;
    }
}

int main()
{
    int cond = 0, cond2 = 0;
    string text;

    while(getline(cin,text)){

        for(int i = 0; i < text.size(); i++){

            if(text[i] == ' ' || text[i] == ','){
                text.erase(i,1);
                i--;
            }
            else if(text[i] == 'l')
                text[i] = '1';
            else if(text[i] == 'O' || text[i] == 'o')
                text[i] = '0';
            else if(!isdigit(text[i])){
                cout << "error" << endl;
                cond = 1;
                break;
            }
            if(isdigit(text[i]) && cond2 == 0){
                if(text[i] == '0' && i < text.size()-1){
                    text.erase(i,1);
                    i--;
                }
                else
                    cond2 = 1;
            }
        }
        if(text == "\0"){
            cout << "error" << endl;
            continue;
        }
        if(compare(text) == 1){
            cout << "error" << endl;
            cond = 1;
        }
        if(cond == 0)
            cout << text << endl;

        cond = cond2 = 0;
    }
}
