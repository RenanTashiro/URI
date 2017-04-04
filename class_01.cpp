#include <cstdio>
using namespace std;

class MyFirstClass
{
public:

    void displayMessage()
    {
        printf( "%s\n", "Hello World." );
    }
};

int main()
{
    MyFirstClass hello;

    hello.displayMessage();

    return 0;
}
