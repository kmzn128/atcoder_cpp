#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
unordered_map<string, string> m = {
    {"Sunny","Cloudy"},
    {"Cloudy","Rainy"},
    {"Rainy","Sunny"}
};

string Main(string S)
{
    return m[S];
}

int main(void){
    string S;
    cin >> S;
    cout << Main(S) << endl;
    return 0;
}