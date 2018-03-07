/*
Nome:      High Five
ID:        2539
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.464s
Tamanho:   2,64 KB
Submissao: 07/01/18 19:30:50
*/
#include <bits/stdc++.h>
using namespace std;

/**
 * Code from geeksforgeeks
 * */
long long  _mergeSort(long long arr[], long long temp[], long long left, long long right);
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right);
 
/* This function sorts the input array and returns the
   number of inversions in the array */
long long mergeSort(long long arr[], long long array_size)
{
    long long *temp = (long long *)malloc(sizeof(long long)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 
/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
long long _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
  long long mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;
 
    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
 
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
 
/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
  long long i, j, k;
  long long inv_count = 0;
 
  i = left; /* i is index for left subarray*/
  j = mid;  /* j is index for right subarray*/
  k = left; /* k is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
 
  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
 
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}

int main()
{
	long long N;
	
	while(scanf("%lld", &N) != EOF)
	{
		long long player[N];
		
		for(long long i = 0; i < N; i++) {
			scanf("%lld", &player[i]);
			player[i] = -player[i];
		}	
		
		printf("%lld\n", mergeSort(player, N));
	}
}
