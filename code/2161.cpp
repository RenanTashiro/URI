#include <bits/stdc++.h>

using namespace std;

int main()
{
	double result = 0;
	int N;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		result = 1.0 / (result + 6.0);
	}
	
	printf("%.10lf\n", 3.0 + result);
}
