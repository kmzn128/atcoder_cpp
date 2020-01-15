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


int Main(int H, int W, VS &S)
{
    const int INF = 100000000;
    int ans = 0;
    int HW = H*W;
    VVI d(HW, VI(HW, INF));
    REP(i, HW) {
        REP(j, HW) {
            if(i == j) d[i][j] = 0;
            else if(abs(i-j) == 1 && (i/W == j/W) && S[i/W][i%W] == '.' && S[j/W][j%W] == '.') d[i][j] = 1;
            else if(abs(i-j) == W && S[i/W][i%W] == '.' && S[j/W][j%W] == '.') d[i][j] = 1;
        }
    }
    REP(k, HW) REP(i, HW) REP(j, HW) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }
    REP(i, HW) REP(j, HW) if(d[i][j] < INF) chmax(ans, d[i][j]);
    return ans;
}

int main(void){
    int H, W;
    cin >> H >> W;
    VS S(H);
    REP(i, H) cin >> S[i];
    cout << Main(H, W, S) << endl;
    return 0;
}