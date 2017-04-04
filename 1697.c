#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second)
{
    return *(int*)first - *(int*)second;
}

int nextPrime(int primes[], int n)
{
    if(n == 0 || n == 1)
        return ++n;

    int next = 1, number = primes[n-1];

    int i, until;
    int ans = 0;

    while(!ans) {
        for(i = 1; i < n; i++) {
            if(number % primes[i] == 0) {
                break;
            }
        }
        if(i == n) {
            next = number;
            ans = 1;
        }
        else {
            number++;
        }
    }

    return next;
}

int binarySearch(int key, int arr[], int max)
{
    int min = 0, mid = 0;

    while(min <= max) {
        mid = (max+min)/2;

        if(key == arr[mid]) {
            return 1;
        }
        else if(key < arr[mid]) {
            max = mid-1;
        }
        else {
            min = mid+1;
        }
    }

    return 0;
}

int main()
{
    int N, A;
    int primes[500000], n = 0;

    scanf("%d", &N);

    while(N--)
    {
        scanf("%d", &A);

        int num[A];
        int i;

        for(i = 0; i < A; i++) {
            scanf("%d", &num[i]);
        }

        qsort(num, A, sizeof(int), compare);

        int maxValue = 0;

        while(1) {
            primes[n] = nextPrime(primes, n);
            if(!binarySearch(primes[n], num, A)) {
                maxValue = primes[n] - 1;
                break;
            }
            ++n;
        }

        printf("%d\n", maxValue);
    }

    return 0;
}
