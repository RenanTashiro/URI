#include <bits/stdc++.h>

using namespace std;

int act_time = 0;
double act_km = 0.0, speed = 0.0;

vector<string> split(string str, char delimeter)
{
    vector<string> internal;
    stringstream ss(str);
    string tok;
    while(getline(ss, tok, delimeter)) {
        internal.push_back(tok);
    }
    return internal;
}

void get_desloc(int h, int m, int s)
{
    int time_s = h*3600 + m*60 + s;
    act_km += speed * ((time_s-act_time)/3600.00);
    act_time = time_s;
}

int main()
{
    string in;
    bool first = true;

    while(getline(cin, in)) {
        vector<string> values;
        stringstream ss(in);
        string aux;

        while(ss >> aux) {
            vector<string> loc = split(aux, ':');
            values.insert(values.end(), loc.begin(), loc.end());
        }

        if(first) {
            act_time = atoi(values[0].c_str())*360 + atoi(values[1].c_str())*60 + atoi(values[2].c_str());
            first = false;
        }

        get_desloc(atoi(values[0].c_str()), atoi(values[1].c_str()), atoi(values[2].c_str()));

        if(values.size() == 3) {
            cout << fixed << setprecision(2) << in << " " << act_km << " km\n";
        } else {
            speed = atof(values[3].c_str());
        }
    }

    return 0;
}