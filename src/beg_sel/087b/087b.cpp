#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int main(void){
    // Your code here!
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    int ans = 0;
    VI coins = {50, 100, 500};
    VVI dp(coins.size()+1, VI(x/50+1, 0));
    REP2(i, 1, x/50+1)
    {
        dp[0][i] = 1;
    }
    REP2(i, 1, coins.size()+1)
    {
        REP2(j, 1, x/50+1)
        {
            int p = dp[i-1][j];
            int q = dp[i][j-coins[i-1]/50];            
            dp[i][j] = p + q;
        }
    }
    cout << dp[coins.size()-1][x/50] << endl;
    return 0;
    
}
