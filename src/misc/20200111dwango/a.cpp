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


int Main(int N, VI &X)
{
    ll ans = 0LL;
    
    return (int)ans;
}

int main(void){
    int N;
    cin >> N;
    VI X(N);
    REP(i, N) cin >> X[i];
    cout << Main(N, X) << endl;
    return 0;
}