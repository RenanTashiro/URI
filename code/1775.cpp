#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, N;
	
	scanf("%d", &T);
	
	for(int TC = 1; TC <= T; TC++)
	{
		scanf("%d", &N);
		
		int value[N], lo = 0, hi = N-1, counter = 0;
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &value[i]);
		}
		
		while(lo <= hi) {
			if(value[lo] == value[hi]) {
				// printf("%d-%d\n", lo, hi);
				lo++, hi--;
			}
			else {
				int i, flag = 0;
				for(i = 1; lo+i <= hi-i; i++) {
					if(value[lo+i] == value[hi] && value[hi-i] == value[lo]) continue;
					else if(value[lo+i] == value[hi]) {
						flag = 1;
						lo++; break;
					}
					else if(value[hi-i] == value[lo]) {
						flag = 1;
						hi--; break;
					}
				}
				if(!flag && lo+i > hi-i) {
					hi--;
				}
			}			
			printf("Counter: (%d) ", counter);
			for(int i = lo; i <= hi; i++) {
				printf("%d ", value[i]);
			}	
			puts("");
			counter++; 			
		}
		
		printf("Caso #%d: %d\n", TC, counter);
	}
}	

/*
 * 24
 * 1 2 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1 2 1
 * ---------------------------------------------
0  * 2 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1 2
1  * 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
2  * 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
3  * 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1
4  * 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1
5  * 2 3 1 2 2 1 3 1 2 3 1 2 3 3
6  * 3 1 2 2 1 3 1 2 3 1 2 3 3
7  * 1 2 2 1 3 1 2 3 1 2 3
8  * 1 2 1 3 1 2 3 1 2
9  * 2 2 1 3 1 2 3 1 2
10 * 2 1 3 1 2 3 1
11 * 1 3 1 2 3 1
12 * 3 1 2 3
13 * 1 2
14 * 1
*/


/*
 * 1 2 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1 2 1
 * 2 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1 2
 * 3 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
 * 1 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
 * 2 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
 * 1 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1 1
 * 2 3 1 2 2 1 3 1 2 3 1 2 3 3 1
 * 2 3 1 2 2 1 3 1 2 3 1 2 3 3
 * 3 1 2 2 1 3 1 2 3 1 2 3 3
 * 1 2 2 1 3 1 2 3 1 2 3
 * 2 2 1 3 1 2 3 1 2 3
 * 2 2 1 3 1 2 3 1 2
 * 2 1 3 1 2 3 1
 * 1 3 1 2 3 1
 * 3 1 2 3
 * 1 2
 * 1
 */
