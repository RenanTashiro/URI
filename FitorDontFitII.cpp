#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, len, len2;
    cin >> N;
    string number1, number2, new_number;
    for(int i = 0; i < N; i++){

        cin >> number1 >> number2;

        if(number1 == number2)
            cout << "encaixa" << endl;
        else{
        len = number1.length();
        len2 = number2.length();

        for(int i = (len - len2); i < len; i++)
            new_number += number1[i];

        if(new_number == number2)
        cout << "encaixa" << endl;
        else
        cout << "nao encaixa" << endl;
        }
        new_number.clear();
    }
}
