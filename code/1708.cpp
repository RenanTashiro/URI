#include <cstdio>

int main()
{
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	int vx = x, vy = 0, it = 1;
	
	while(vx > vy) {
		vx += x;
		vy += y;
		it++;
	}
	
	printf("%d\n", it);
}
