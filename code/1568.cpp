#include <bits/stdc++.h>

using namespace std;

vector<int> find_first_sequence(int key)
{
    vector<int> seq;
    int half_top = ceil(key/2.0);

    if(key & 1) {
        seq.push_back(half_top), seq.push_back(half_top-1);
    } else {
        int sum = 0;
        for(int i = half_top, i > 0; i--) {
            sum += i;
            if(sum == key) {
                break;
            } else if(sum > key) {
                break;
            }
        }
    }

    return seq;
}

int main()
{
    long long int N;

    while(cin >> N) {
        vector<int> seq = find_first_sequence(N);

        // TODO
    }
}
