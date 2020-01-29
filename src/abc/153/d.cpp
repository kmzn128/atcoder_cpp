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


ll Main(ll H)
{
    ll ans = 1LL;
    int N = 0;
    while(H > 0) {
        H >>= 1;
        N++;
    }
    ll doubles = 1LL;
    REP2(i, 1, N) {
        doubles *= 2;
        ans += doubles;
    } 
    return ans;
}

int main(void){
    ll H;
    cin >> H;
    cout << Main(H) << endl;
    return 0;
}