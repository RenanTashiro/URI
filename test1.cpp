#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    string message = "";

    message += "\tX * X X X X X X X X X X X X X X\n";
    message += "\tX * X X X X X X X X X X X X X X\n";
    message += "\tX X * X X X X X X X X X X X X X\n";
    message += "\tX X * X X X X X X X X X X X X X\n";
    message += "\tX X X * X X X X X X X X X X X X\n";
    message += "\tX X X * X X X X X X X X X X X X\n";
    message += "\tX X X X * X X X X X X X X X X X\n";
    message += "\tX X X X * X X X X X X X X X X X\n";
    message += "\tX X X X X * X X X X X X X X X X\n";
    message += "\tX X X X X * X X X X X X X X X X\n";


    cout << message;
    system("cls");
    Sleep(500);
    cout << message;
    system("cls");
    Sleep(500);
    cout << message;
    system("cls");
    Sleep(500);
    cout << message;

    return 0;
}
