#include <stdio.h>

void makePalindromes(unsigned long long number, unsigned char base, unsigned long long* palindromes)
{
    unsigned long long upper = number;
    unsigned long long lower = 0;
    unsigned char digit;
    unsigned int i;
    unsigned long long power = 1;

    while(number > 0) {
        upper = upper * base;
        digit = number % base;
        lower = lower * base + digit;
        number = number / base;
        power *= base;
    }

    palindromes[0] = upper + lower;
    palindromes[1] = upper * base + lower;

    for(i = 1; i < base; i++) {
        palindromes[i+1] = palindromes[1] + i * power;
    }
}

int main()
{
    unsigned long long palindromes[100] = {0};
    unsigned int i;

    makePalindromes(89423, 10, palindromes);

    for(i = 0; i <= 10; i++) {
        printf("%lld\n", palindromes[i]);
    }

    return 0;
}
