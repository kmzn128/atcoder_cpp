#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)

double Main(int N, vector<double> &p) {
    double dp[N+1][N+1];
    REP(i, N+1) REP(j, N+1) dp[i][j] = 0;
    dp[1][1] = p[0];
    dp[1][0] = 1.0 - p[0];
    for(int i = 2; i < N+1; i++) {
        dp[i][i] = dp[i-1][i-1]*p[i-1];
        for(int j = 1; j < N+1; j++) {
            dp[i][i-j] = dp[i-1][i-j]*(1-p[i-1]) + dp[i-1][i-1-j]*p[i-1];
        }
    }
    double ans = 0.0;
    for (int i = N; i > N/2; i--) ans += dp[N][i];
    return ans;
}

int main(void) {
    int N;
    cin >> N;
    vector<double> p(N);
    REP(i, N) cin >> p[i];
    printf("%.10f", Main(N, p));
    return 0;
}