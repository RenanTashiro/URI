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

        if(swap & 1) {
            puts("Marcelo");
        }
        else {
            puts("Carlos");
        }
    }

    return 0;
}

void merge(int *arr, int inicio, int meio, int fim)
{
    int *tmp, size = fim-inicio+1;
    int pos1 = inicio, pos2 = meio+1;
    int f1 = 0, f2 = 0;

    tmp = (int*) malloc(size * sizeof(int));

    if(tmp != NULL) {
        int i, j, k, c = 0;
        for(i = 0; i < size; i++) {
            if(!f1 && !f2) {
                if(arr[pos1] < arr[pos2]) {
                    tmp[i] = arr[pos1++];
                }
                else {
                    swap += abs(pos2-pos1-c++);
                    tmp[i] = arr[pos2++];
                }
                if(pos1 > meio) {
                    f1 = 1;
                }
                if(pos2 > fim) {
                    f2 = 1;
                }
            }
            else {
                if(f1) {
                    tmp[i] = arr[pos2++];
                }
                else {
                    tmp[i] = arr[pos1++];
                }
            }
        }

        for(j = inicio, k = 0; k < size; j++, k++) {
            arr[j] = tmp[k];
        }
    }
}

void mergeSort(int *arr, int inicio, int fim)
{
    int meio = (inicio + fim) / 2;

    if(inicio < fim) {
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio+1, fim);
        merge(arr, inicio, meio, fim);
    }
}
