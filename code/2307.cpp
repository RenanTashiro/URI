#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, turns = 0;
	
	scanf("%d", &N);
	
	queue<int> descarte;
	int card, wanted = 1;
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &card);
		descarte.push(card);
	}
	
	int take_off[100001] = {0};
	
	while(!descarte.empty())
	{
		int card = descarte.front(); 
		
		descarte.pop();
		
		if(card == wanted)
			wanted++;
		else
			descarte.push(card);
		
		take_off[card]++;
	}
	
	for(int i = 0; i <= N; i++) {
		turns = max(turns, take_off[i]);
	}
	
	printf("%d\n", turns);
}

//~ c:
//~ d:
//~ m:1 2 3 4 5
//~ r:3
//~ t:
