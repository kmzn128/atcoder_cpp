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


VI Main(int N, int Q, VI &A, VI &B, VI &P, VI &X)
{
    VI ans(N-1, 0);
    REP(i, Q) {
        ans[P[i]-1] += X[i]; 
    }
    REP(i, N-1) {
        ans[B[i]-1] += ans[A[i]-1];
    }
    return ans;
}

int main(void){
    int N, Q;
    cin >> N >> Q;
    VI A(N-1), B(N-1);
    REP(i, N-1) cin >> A[i] >> B[i];
    VI P(Q), X(Q);
    REP(i, Q) cin >> P[i] >> X[i];
    VI out = Main(N, Q, A, B, P, X);
    REP(i, N) cout << out[i] << ' ';
    cout << endl;
    return 0;
}