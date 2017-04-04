#include <bits/stdc++.h>

using namespace std;

int main()
{
	string digit;
	
	while(cin >> digit)
	{
		int counter[10] = {0};
		int greater = 0, index = 0;
		
		for(int i = 0; i < (int)digit.size(); i++)
		{
			counter[digit[i]-'0']++;
		}
		
		for(int i = 0; i < 10; i++)
		{
			if(counter[i] >= greater)
			{
				greater = counter[i];
				index = i;
			}
		}
		
		printf("%d\n", index);
	}
}
