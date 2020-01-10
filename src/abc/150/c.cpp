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

VI factorial(int n) {
    VI ans(n, 1);
    REP2(i, 1, n) {
        ans[i] = ans[i-1] * (i+1);
    }
    return ans;
}

int calc_index(int N, VI &A, VI &f) {
    int ans = 0;
    VI digits(N);
    REP(i, N) digits[i] = i+1;
    REP(i, N-1) {
        auto it = find(ALL(digits), A[i]);
        int d = distance(digits.begin(), it);
        ans += d * f[N-2-i];
        digits.erase(it);
    }
    return ans;
}

int Main(int N, VI &P, VI &Q)
{
    int ans = 0;
    VI f = factorial(N);
    int a = calc_index(N, P, f);
    int b = calc_index(N, Q, f);
    return abs(a-b);
}


int main(void){
    int N;
    cin >> N;
    VI P(N), Q(N);
    REP(i, N) cin >> P[i];
    REP(i, N) cin >> Q[i];
    cout << Main(N, P, Q) << endl;
    return 0;
}