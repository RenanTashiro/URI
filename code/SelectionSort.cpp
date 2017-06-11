#include <iostream>
using namespace std;

void SelectionSort(int arry[], int lenght)
{
    int tmp, index;

    for(int i = 0; i < lenght; i++){
        tmp = arry[i];
        index = i;
        for(int l = i + 1; l < lenght; l++){
            if(arry[l] < tmp){
                tmp = arry[l];
                index = l;
            }
        }
        arry[index] = arry[i];
        arry[i] = tmp;

    }
}

int main()
{
    int arry[10] = {10,9,8,7,6,5,4,3,2,1};

    SelectionSort(arry, 10);

    for(int i = 0; i < 10; i++)
        cout << arry[i] << ' ';


}
