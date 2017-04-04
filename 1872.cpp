// Interval [0.000001;999.999,999999]
#include <bits/stdc++.h>

using namespace std;

double value;

bool can(double number)
{
	string str = to_string(value + number), ori = str;	
	size_t pos = str.find(".");
	if(pos != string::npos) str.erase(str.begin()+str.find("."));
	reverse(str.begin(), str.end());
	return ori == str;
}

int main()
{
	ios::sync_with_stdio(false);	
	int C;	
	cin >> C;	
	while(C--) {	
		double lo = 999999.999999, hi = 0.000001, mid = 0.0, ans = 0.0;
		cin >> value;
		for(int i = 0; i < 50; i++) {
			mid = (lo + hi) / 2.0;
			cout << mid << endl;
			if(can(mid)) { ans = mid; hi = mid; }
			else 		   lo = mid;
		}
		cout << fixed << setprecision(10) << ans << endl;
	}
}
