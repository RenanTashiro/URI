/*
Nome:      Balé
ID:        2400
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   1,53 KB
Submissao: 07/02/18 10:26:55
*/
#include <bits/stdc++.h>
using namespace std;

long long  _mergeSort(int arr[], vector<int> &temp, long long left, long long right);
long long merge(int arr[], vector<int> &temp, long long left, long long mid, long long right);

long long mergeSort(int arr[], long long array_size)
{
    vector<int> temp = vector<int>(array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 

long long _mergeSort(int arr[], vector<int> &temp, long long left, long long right)
{
  long long mid, inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;

    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);

    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
 

long long merge(int arr[], vector<int> &temp, long long left, long long mid, long long right)
{
  long long i, j, k;
  long long inv_count = 0;
 
  i = left; 
  j = mid; 
  k = left; 
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
      inv_count = inv_count + (mid - i);
    }
  }

  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  while (j <= right)
    temp[k++] = arr[j++];
 
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	int ans = mergeSort(arr, n);
	
	printf("%d\n", ans);
}
