#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int inicio, int meio, int fim);
void mergeSort(int *arr, int inicio, int fim);

int swap = 0;

int main()
{
    int N;

    while(scanf("%d", &N) && N != 0)
    {
        int buckets[N];
        int i;

        for(i = 0; i < N; i++) {
            scanf("%d", &buckets[i]);
        }

        swap = 0;
        mergeSort(buckets, 0, N);

        printf("%d\n", swap);
    /*
        if(swap & 1) {
            puts("Marcelo");
        }
        else {
            puts("Carlos");
        }
    */
    }

    return 0;
}

void merge(int *arr, int inicio, int meio, int fim)
{
    int i, j, k;
    i = inicio;
    j = meio;
    k = inicio;
    int *tmp = (int*) malloc(((fim-inicio+1)/2) * sizeof(int));
    while((i < meio) && (j <= fim)) {
        if(arr[i] < arr[j]) {
            tmp[k++] = arr[i++];
        }
        else {
            tmp[k++] = arr[j++];
            swap = swap + (meio - i);
        }
    }
    while(i < meio)
        tmp[k++] = arr[i++];
    while(j <= fim)
        tmp[k++] = arr[j++];
    for(i = inicio; i <= fim; i++)
        arr[i] = tmp[i];
}

void mergeSort(int *arr, int inicio, int fim)
{
    int meio = (inicio + fim) / 2;

    if(inicio < fim) {
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio+1, fim);
        merge(arr, inicio, meio, fim);;
    }
}
