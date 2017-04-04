#include <bits/stdc++.h>

using namespace std;

bool invalid(int c[]) 
{
	for(int i = 0; i < 10; i++)
		if(c[i] > 2) return true;
	return false;
}

void zero_handling(string &number, int idx, int &pos, int c[])
{
	while(number[idx] < '0') {
		number[idx] = '9';
		c[9]++;
		number[idx-1]--;		
		if(number[idx-1] != '/')  
			c[number[idx-1]-'0']++;
		else 
			c[0]--;			
		idx--;
		if(idx == pos) {
			pos++;
			idx = (int)number.size()-1;
			break;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	
	string number;
	int c[10] = {0};
	
	cin >> number;
	
	for(int i = 0; i < (int)number.size(); i++) {
		c[number[i]-'0']++;
	}
	
	int init = 0, idx = (int)number.size()-1;
	
	while(invalid(c))
	{
		//for(int i : c) cout << i << ' ';
		//cout << endl;
		if(c[number[idx]-'0'] > 2) {
			c[number[idx]-'0']--;
			number[idx]--;
			if(number[idx] < '0') {
				zero_handling(number, idx, init, c);
			} else {
				c[number[idx]-'0']++;
			}
		} else {
			idx--;
			if(idx < init) idx = (int)number.size()-1; // reset
		}
		cout << number << endl;
	}
	
	cout << number.substr(init) << endl;;
}
