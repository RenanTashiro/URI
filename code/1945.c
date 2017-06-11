#include <stdio.h>
#include <string.h>

#define MAXL 100

int main()
{
    char command[MAXL];

    while( fgets( command, MAXL, stdin )  )
    {
        puts( command );
    }

    return 0;
}
