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


ll Main(int N, int K, VI &H)
{
    ll ans = 0LL;
    if(N <= K) return 0LL;
    sort(RALL(H));
    REP2(i, K, N) ans += (ll)H[i];
    return ans;
}

int main(void){
    int N, K;
    cin >> N >> K;
    VI H(N);
    REP(i, N) cin >> H[i];
    cout << Main(N, K, H) << endl;
    return 0;
}