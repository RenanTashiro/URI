#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		unordered_map<long long int,int> numbers;
		long long int A;
		
		for(int i = 0; i < N; i++) {
			scanf("%lld", &A);
			numbers[A] += 1;
		}
		
		for(unordered_map<long long int,int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		{
			if(it->second % 2 != 0) {
				printf("%lld\n", it->first);
				break;
			}
		}
	}
}
