#include <stdio.h>

int foo(int p)
{
    if(p == 0)
        return 1;
    return 2 * foo(p-1);
}

int another_foo(int t)
{
    if(t == 1)
        return 1;
    return another_foo(t-1) + 3;
}

int fibo(int f)
{
    if(f == 1)
        return 1;
    if(f == 2)
        return 2;
    return fibo(f-1) + fibo(f-2);
}

int fat(int n)
{
    if(n == 1) {
        return 1;
    }
    return n * fat(n-1);
}

int rabbit(int f, int t)
{
    if(f <= 1)
        return 1;
    return fibo(f-1) + fibo(f-t);
}

int main()
{
    printf("%d %d %d %d %d\n", rabbit(10, 5), foo(4), another_foo(4), fibo(5), fat(5));

    return 0;
}
