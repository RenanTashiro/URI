#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%.1lf\n", (double)(pow(((1+sqrt(5))/2), n)-pow(((1-sqrt(5))/2), n))/sqrt(5));
}

