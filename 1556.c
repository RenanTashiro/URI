#include <stdio.h>
#include <string.h>

void removeLetter(char *str)
{
    char less = 'z';
    int pos = 0, i;

    for(i = 0; i < strlen(str); i++) {
        if(less > str[i]) {
            less = str[i];
            pos = i;
        }
    }
    puts("COOL");
    removeLetter(&str[pos+1]);
}

int main()
{
    char str[1005];

    scanf("%1000s", str);

    removeLetter(str);
    puts("End");

    return 0;
}
