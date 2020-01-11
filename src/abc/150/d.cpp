#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}

ll lcd(ll A, ll B)
{
    if(!B) return A;
    return lcd(B, A%B);
}

ll gcm(ll A, ll B) {
    return (A*B)/lcd(A,B);
}

ll calc_gcm(int N, VI &V) {
    ll l = (ll)V[0];
    REP2(i, 1, N) {
        ll n = gcm(l, V[i]);
        l = n;
    }
    return l;
}

ll num_div2(ll n) {
    ll ans = 0LL;
    if(n%2LL == 0) {
        n/2LL;
        ans++;
    }
    return ans;
}


ll Main(int N, int M, VI &A)
{
    int ans = 0;
    REP(i, N) A[i] /= 2;
    // ll t = num_div2(A[0]);
    // REP2(i, 1, N) {
    //     if(num_div2(A[i]) != t) return 0;
    // }
    ll cm = calc_gcm(N, A);
    if(!((ll)M/(ll)cm)) return 0;
    else return (ll)((((ll)M/(ll)cm)+1LL)/2LL);
}


int main(void){
    int N, M;
    cin >> N >> M;
    VI A(N);
    REP(i, N) cin >> A[i];
    cout << Main(N, M, A) << endl;
    return 0;
}