#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	
	if(str.size() <= 140)
		puts("TWEET");
	else
		puts("MUTE");
}
