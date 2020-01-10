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


VI Main(int K, int X)
{
    int N = 2*K-1;
    VI ans(N, 0);
    REP(i, N) ans[i] = X-K+1 + i;
    return ans;

}

int main(void){
    int K, X;
    cin >> K >> X;
    VI out = Main(K, X);
    int N = out.size();
    REP(i, N) cout << out[i] << ' ';
    cout << endl;
    return 0;
}