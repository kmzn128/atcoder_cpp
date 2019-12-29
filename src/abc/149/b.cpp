#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> VL;



VL Main(ll A, ll B, ll K)
{
    VL ans(2, 0LL);
    ans[0] = max(0LL, A-K);
    ans[1] = max(0LL, B-max(0LL, K-A));
    return ans;
}

int main(void){
    ll A, B, K;
    cin >> A >> B >> K;
    VL out = Main(A, B, K);
    cout << out[0] << ' ' << out[1] << endl;
    return 0;
}