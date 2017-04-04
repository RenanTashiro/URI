#include <bits/stdc++.h>

using namespace std;

typedef vector<string> vs;

void suffix_array(vs &suff, string c)
{
	set<string> inSuffix;

	for(int i = 0; i < (int)suff.size(); i++)
	{
		suff[i] += c;
		inSuffix.insert(suff[i]);
	}

	for(int i = 0; i < (int)c.size(); i++)
	{
		suff.push_back(&c[i]);
		inSuffix.insert(&c[i]);
	}
	
	suff.clear();
	
	for(set<string>::iterator it = inSuffix.begin(); it != inSuffix.end(); it++)
	{
		suff.push_back(*it);
	}
}

long long LCP(string a, string b)
{
	long long longest = 0;
	
	for(int i = 0; i < (int)a.size() && i < (int)b.size(); i++)
	{
		if(a[i] != b[i])
			break;
		longest++;
	}
		
	return longest;
}

// bottleneck
long long count_substring(vs &suff)
{
	if(suff.empty())
		return 0;
		
	long long count = (int)suff[0].size();
	
	for(int i = 1; i < (int)suff.size(); i++)
	{
		count += (int)suff[i].size() - LCP(suff[i], suff[i-1]);
	}
	
	return count;
}

int main()
{
	string in;
	
	while(cin >> in)
	{				
		vs suff;
		string buff = "";
		long long int previous_ans = 0;
		
		for(int i = 0; i < (int)in.size(); i++)
		{
			if(in[i] == '?')
			{
				if(buff != "") {
					suffix_array(suff, buff);
					buff = "";
					previous_ans = count_substring(suff);
				}
				printf("%lld\n", previous_ans);
			}
			else
			{
				buff += in[i];
			}
		}
	}
}


