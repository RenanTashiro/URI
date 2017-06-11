#include <bits/stdc++.h>

using namespace std;

int selection_count_sort(int arr[], const int SIZE) 
{
	int counter = 0, computation = 0;
	for(int i = 1; i <= SIZE; i++) {
		if(arr[i-1] == i) continue;
		for(int j = i-1; j < SIZE; j++) {
			computation++;
			if(arr[j] == i) {
				swap(arr[j], arr[i-1]);
				counter++;
				break;
			}
		}
	}
	printf("%d\n", computation);
	return counter;
}

int main()
{
	int TC;
	
	scanf("%d", &TC);
	
	while(TC--)
	{
		int N;
		
		scanf("%d", &N);
		
		int arr[N];
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);			
		}
		
		int ans = selection_count_sort(arr, N);

		printf("%d\n", ans);
	}
}

/*
 * 10 8 7 2 1 5 4 3 6 9
 * 1 8 7 2 10 5 4 3 6 9
 * 1 2 7 8 10 5 4 3 6 9
 * 1 2 3 8 10 5 4 7 6 9
 * 1 2 3 4 10 5 8 7 6 9
 * 1 2 3 4 5 10 8 7 6 9
 * 1 2 3 4 5 6 7 8 10 9
 * 1 2 3 4 5 6 7 8 9 10
 */
