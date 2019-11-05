#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<string> VS;
typedef vector<VS> VVS;

string Main(string &s, string &t) {
    int ss = s.size();
    int st = t.size();
    VVS dp(st+1, VS(ss+1, ));
    REP(i, n) {
        REP(j, W+1) {
            dp[i+1][j] = (j < w[i]) ? dp[i][j]
                    : max(dp[i][j], dp[i][j-w[i]] + v[i]);
        }
    }
    return dp[n][W];
}

int main(void) {
    string s, t;
    cin >> s;
    cin >> t;
    cout << Main(s, t) << endl;
    return 0;
}