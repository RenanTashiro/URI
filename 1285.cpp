#include <bits/stdc++.h>

using namespace std;

bool repeated(int n) 
{
	int number[10] = {0};
	string str = to_string(n);
	for(int i = 0; i < (int)str.size(); i++) {
		if(number[str[i]-'0']) {
			return false;
		} 
		else {
			number[str[i]-'0'] = 1;
		}
	}
	return true;
}

int main()
{
	int repeated_number[5001]; 
	repeated_number[0] = 0;

	for(int i = 1; i <= 5000; i++) {
		repeated_number[i] = repeated_number[i-1] + (repeated(i) ? 1 : 0);
	}

	int N, M;		
	
	while(scanf("%d%d", &N, &M) != EOF)
	{
		printf("%d\n", repeated_number[M] - repeated_number[N-1]);
	}
}
