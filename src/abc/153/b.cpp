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
#define RALL(V) V.rbegin(), V.rend()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


string Main(int H, int N, VI &A)
{
    sort(RALL(A));
    ll sum = 0;
    ll HH = (ll)H;
    REP(i, N) {
        sum += A[i];
        if(sum >= HH) return "Yes";
    }
    return "No";
}

int main(void){
    int H, N;
    cin >> H >> N;
    VI A(N);
    REP(i, N) cin >> A[i];
    cout << Main(H, N, A) << endl;
    return 0;
}