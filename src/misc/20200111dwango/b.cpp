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
const int mod = 1000000007;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res/=a;
  }
};

int Main(int N, VI &X)
{
    mint ans = 0;
    vector<mint> MX(N);
    REP(i, N) MX[i] = X[i];
    VI indices(N-1);
    REP(i, N-1) indices[i] = i;
    do {
        VI ref_id(N);
        REP(i, N) ref_id[i] = i;
        REP(i, N-1) {
            auto it = find(ALL(ref_id), indices[i]);
            auto it2 = next(it, 1);
            ans += X[*it2] - X[*it];
            ref_id.erase(it);
        }
    }while(next_permutation(ALL(indices)));
    return ans.x;

}

int main(void){
    int N;
    cin >> N;
    VI X(N);
    REP(i, N) cin >> X[i];
    cout << Main(N, X) << endl;
    return 0;
}