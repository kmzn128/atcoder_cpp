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


int Main(int N, string S)
{
    int ans = 0;
    REP(i, N-2) {
        if(S[i] == 'A' && S[i+1] == 'B' && 
        S[i+2] == 'C') {
            ans++;
        }
    }
    return ans;
}


int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;
    cout << Main(N, S) << endl;
    return 0;
}