#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<pair<ii,int>> viii;

int main()
{
    int N, L, A;

    while(cin >> N >> L >> A && N != 0) {
        viii cam;
        int X, R;

        for(int i = 0; i < N; i++) {
            cin >> X >> R; R--;
            cam.push_back({{X-R,X+R},R});
        }

        sort(cam.begin(), cam.end());

        int init_idx = 0, n_cam = 0, end_idx = 0;

        for(viii::iterator it = cam.begin(); it != cam.end(); ++it) {
            if(it->first.first > L) break;

            if(it->first.first <= init_idx && it->second+1 >= A/2) {
                if(it->first.second > end_idx) {
                    end_idx = it->first.second;
                }
            } else if(it->first.first > init_idx && init_idx != end_idx) {
                init_idx = end_idx;
                n_cam++;
                if(it->first.first <= init_idx && it->second+1 >= A/2) {
                    end_idx = it->first.second;
                }
            } else {
                break;
            }
        }

        if(init_idx != end_idx) {
            n_cam++;
        }

        if(end_idx >= L) {
            cout << n_cam << "\n";
        } else {
            cout << "Tera que comprar mais cameras.\n";
        }
    }

}

/*
6 10 10
3 5
9 3
6 1
7 5
1 3
2 4
0 0 0

[-X,7] [3,11] *** Caso interssante [2   [1  2]    1]
*/
