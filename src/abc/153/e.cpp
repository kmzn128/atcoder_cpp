#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
#define RALL(V) V.rbegin(), V.rend()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


int Main(int H, int N, VI &A, VI &B)
{
    VVI dp(N+1, VI(H+1, 0));
    REP(i, N) {
        for(int j = 0; j <= H; j++) {
            if(j < A[i]) {
                dp[i+1][j] = dp[i][j];
            }
            else {
                dp[i+1][j] = max(dp[i][j], dp[i+1][j-A[i]]+B[i]);
            }
        }
    }
    return dp[N][H];
}

int main(void){
    int H, N;
    cin >> H >> N;
    VI A(N), B(N);
    REP(i, N) cin >> A[i] >> B[i];
    cout << Main(H, N, A, B) << endl;
    return 0;
}