#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<bool> VB;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


int Main(int N, VI &P)
{
    int ans = 1;
    int mi = P[0];
    REP2(i, 1, N) if(mi > P[i]) {
        mi = P[i];
        ans++;
    } 
    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI P(N);
    REP(i, N) cin >> P[i];
    cout << Main(N, P) << endl;
    return 0;
}