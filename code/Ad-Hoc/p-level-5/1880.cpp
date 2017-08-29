/*
Nome:      Renzo e a Decoração Capicuânica
ID:        1880
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   853 Bytes
Submissao: 05/02/16 09:02:24
*/
#include <bits/stdc++.h>

using namespace std;

string decimal_to(int dec, int base)
{
    string ans = "";
    while(dec > 0) {
        ans += (dec % base) + 65;
        dec /= base;
    }
    return ans;
}

bool is_palindrome(string value)
{
    int lo = 0, hi = (int)value.size()-1;
    while(lo < hi) {
        if(value[lo++] != value[hi--])
            return false;
    }
    return true;
}
int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N;
        bool flag = false;

        scanf("%d", &N);

        for(int i = 2; i <= 16; i++) {
            if(is_palindrome(decimal_to(N, i))) {
                printf("%s%d", flag ? " " : "", i);
                flag = true;
            }
        }

        if(!flag)
            printf("%d", -1);

        puts("");
    }
}
