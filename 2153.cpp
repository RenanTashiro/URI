#include <bits/stdc++.h>

using namespace std;

int main()
{
	char word[35];
	
	while(scanf("%s", word) != EOF)
	{
		int last_index = strlen(word) - 1;
		vector<int> cut_index;

		for(int i = last_index; i >= 0; i--)
		{
			char *sufix = &word[i];
			int len = strlen(sufix);
			
			if(strncmp(sufix, &word[i-len], len) == 0)
				cut_index.push_back(i-1);
		}
		
		reverse(cut_index.begin(), cut_index.end());
		
		for(auto idx : cut_index)
		{
			for(int i = 0; i <= idx; i++)
				putchar(word[i]);
			puts("");
		}
		
		if(cut_index.size() == 0)
			puts(word);		
	}
}
