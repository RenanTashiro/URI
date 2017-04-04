#include <iostream>
#include <vector>
#include <cstdio>
#include <ctime>
using namespace std;

void Sort(vector<int>& arry){

    int tmp;

    for(int i = 1; i < arry.size(); i++){

        int l = i;
        while(l > 0 && arry[l] < arry[l-1]){
            tmp = arry[l];
            arry[l] = arry[l-1];
            arry[l-1] = tmp;
        l--;
        }
    }
}

int main()
{
    int number;
    vector<int> X;

    while(cin >> number){
        X.push_back(number);
    }
    clock_t t = clock();
    Sort(X);
    t = clock() - t;
    printf ("It took me %u clicks (%.4f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    for(int i = 0; i < X.size(); i++){
        cout << X[i] << ' ';
    }
}
