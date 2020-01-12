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
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


VI Main(int N, int M, VI &P, VS &S)
{
    VI ans(2, 0);
    VI ACs(N, 0);
    VI WAs(N, 0);
    REP(i, M) {
        if(S[i] == "WA" && ACs[P[i]-1] == 0) WAs[P[i]-1]++;
        else if (S[i] == "AC" && ACs[P[i]-1] == 0) ACs[P[i]-1]++;
        else continue;
    }
    REP(i, N) {
        if(ACs[i] == 0) WAs[i] = 0;
    }
    ans[0] = accumulate(ALL(ACs), 0);
    ans[1] = accumulate(ALL(WAs), 0);
    return ans;
}

int main(void){
    int N, M;
    cin >> N >> M;
    VI P(M);
    VS S(M);
    REP(i, M) cin >> P[i] >> S[i];
    VI out = Main(N, M, P, S);
    cout << out[0] << ' ' << out[1] << endl;
    return 0;
}