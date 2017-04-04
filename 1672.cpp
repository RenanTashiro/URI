#include <bits/stdc++.h>
 
using namespace std; 

int joseph(int n)
{
	if(n == 1) return 1;
	if(n & 1) return joseph((n-1)/2) * 2 + 1;
	return joseph(n/2) * 2 - 1;
}

int main()
{
    int B, E;    
		     
    while(scanf("%de%d", &B, &E) && (B != 0 || E != 0)) {
		printf("%d\n", joseph(B*(int)pow(10,E)));
    }
}
