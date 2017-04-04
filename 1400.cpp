#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M, K;

	while(cin >> N >> M >> K && N != 0)
	{
		int number = 1, turn = 0, freq_M = 0;
		bool flag = true;
		
		while(number <= 55000 && flag) {
			if(!turn) {
				for(int i = 1; i <= N; i++) {
					if(i == M && (number % 7 == 0 || to_string(number).find("7") != string::npos)) {
						freq_M++;
						if(freq_M == K) {
							cout << number << endl;
							flag= false;
						}
					}
					number++;
				}
				turn = 1;
			}
			else {
				for(int i = N-1; i > 1; i--) {
					if(i == M && (number % 7 == 0 || to_string(number).find("7") != string::npos)) {
						freq_M++;
						if(freq_M == K) {
							cout << number << endl;
							flag= false;
						}
					}
					number++;
				}
				turn = 0;
			}
		}	
	}
}
