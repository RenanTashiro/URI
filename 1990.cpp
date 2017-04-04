#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N;

    while(cin >> N && N != -1) {
        vector<long long int> C(N-1);
        int sum = 0, ans = 0;

        for(int i = 0; i < N-1; i++) {
            cin >> C[i];
            sum += C[i];
        }

        sort(C.begin(), C.end());

        long long int first = (C[N/2-1]*N)-sum;
        long long int second = (C[N/2]*N)-sum;

        if(C[N/2-1] > first && !binary_search(C.begin(), C.end(), first)) {
            ans++;
        }
        if(C[N/2] < second && !binary_search(C.begin(), C.end(), second)) {
            ans++;
        }
        if((long long int)sum%(N-1) == 0) {
            long long int third = sum/(N-1);
            if(C[N/2-1] < third && third < C[N/2]) {
                ans++;
            }
        }

        cout << ans << "\n";
    }
}
