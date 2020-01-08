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


int Main(int N, VI &H)
{
    int counter = 0;
    int ans = 0;
    REP2(i, 1, N) {
        if(H[i-1] >= H[i]) counter++;
        else {
            chmax(ans, counter);
            counter = 0;
        }
    }
    chmax(ans, counter);
    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI H(N);
    REP(i, N) cin >> H[i];
    cout << Main(N, H) << endl;
    return 0;
}