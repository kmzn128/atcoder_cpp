#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef long long ll;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<string> VS;

int Main(int H, int W, VS &a) {
    VVL dp(H, VL(W, 0));
    REP2(i, 1, H) {
        if(a[i][0] == '#') {
            REP2(j, i, H) dp[i][0] = 0;
            break;
        }
        else dp[i][0] = 1;
    }
    REP2(i, 1, W) {
        if(a[0][i] == '#') {
            REP2(j, i, W) dp[0][i] = 0;
            break;
        }
        else dp[0][i] = 1;
    }   
    REP2(i, 1, H) {
        REP2(j, 1, W) {
            if(a[i][j] == '#') dp[i][j] = 0;
            else {
                dp[i][j] = (dp[i-1][j] % (ll)(pow(10,9)+7) + dp[i][j-1] % (ll)(pow(10,9)+7)) % (ll)(pow(10,9)+7) ;
            }
        }
    }
    return dp[H-1][W-1];
}

int main(void) {
    int H, W;
    cin >> H >> W;
    VS a(H);
    REP(i, H) cin >> a[i];
    cout << Main(H, W, a) << endl;
    return 0;
}