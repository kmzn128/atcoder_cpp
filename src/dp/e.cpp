#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef long long ll;
typedef vector<ll> VL;
typedef vector<VL> VVL;

ll Main(int &n, ll &W, VL &w, VI &v) {
    VVL dp(n+1, VL(W+1, 0));
    REP(i, n) {
        REP(j, W+1) {
            dp[i+1][j] = (j < w[i]) ? dp[i][j]
                    : max(dp[i][j], dp[i][j-w[i]] + v[i]);
        }
    }
    return dp[n][W];
}

int main(void) {
    int n;
    ll W;
    cin >> n >> W;
    VL w(n);
    VI v(n);
    REP(i, n) cin >> w[i] >> v[i];
    cout << Main(n, W, w, v) << endl; 
    return 0;
}