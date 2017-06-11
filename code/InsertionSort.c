#include <stdio.h>

int InsertionSort(int arry[], int size)
{
    int i, j, key;

        for(i = 1; i < size; i++){
            key = arry[i];
            j = i - 1;
            while(j >= 0 && key < arry[j]){
                arry[j+1] = arry[j];
                j--;
            }
            arry[j+1] = key;
        }
}
int main()
{
    int array[] = {20, 564, 32451, 1, 9, 10, 51, 965, 34521221, 654, 321, 64551, 657891 ,98,321,564,321,5,46,231,678954,231,5156,1,32211};
    InsertionSort(array, 25);

        int i;
        for(i = 0; i < 25; i++){
            printf("%d ",array[i]);
        }

}
