#include <cstdio>
#include <cstring>

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		char word[10005];
		
		scanf("%s", word);
		
		printf("%.2lf\n", (double)strlen(word)/100);
	}
}
