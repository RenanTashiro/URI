/*
Nome:      Jogo do Bicho
ID:        1483
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   1,84 KB
Submissao: 02/02/16 09:27:11
*/
#include <bits/stdc++.h>

using namespace std;

template<typename T>
std::string to_string(T value) {
    ostringstream os;
    os << value;
    return os.str();
}

bool same_group(int N, int M)
{
    int a = N % 100, b = M % 100, c_a = 4, c_b = 4;

    if(a == 0) {
        if(b == 0 || b > 96)
            return true;
        return false;
    }
    if(b == 0) {
        if(a == 0 || a > 96)
            return true;
        return false;
    }

    while(c_a < a) {
        c_a += 4;
    }

    while(c_b < b) {
        c_b += 4;
    }

    if(c_a == c_b) {
        return true;
    }

    return false;
}

int main()
{
    double V;
    int N, M;

    while(cin >> V >> N >> M)
    {
        if(V == 0.0 && N == 0 && M == 0) {
            break;
        }

        string N_str = to_string(N);
        string M_str = to_string(M);

        while((int)N_str.size() < 4) {
            N_str.insert(N_str.begin(), '0');
        }

        while((int)M_str.size() < 4) {
            M_str.insert(M_str.begin(), '0');
        }

        int i = N_str.size()-1, j = M_str.size()-1, counter = 4;
        int occurrence = 0;

        while(counter--) {
            if(N_str[i--] == M_str[j--]) {
                occurrence++;
            }
            else {
                break;
            }
        }

        if(occurrence == 4) {
            cout << fixed << setprecision(2) << V * 3000 << endl;
        }
        else if(occurrence == 3) {
            cout << fixed << setprecision(2) << V * 500 << endl;
        }
        else if(occurrence == 2) {
            cout << fixed << setprecision(2) << V * 50 << endl;
        }
        else if(same_group(N, M)) {
            cout << fixed << setprecision(2) << V * 16 << endl;
        }
        else {
            puts("0.00");
        }
    }
}