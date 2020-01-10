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

int Main(int N, int M, VI &A)
{
    int ans = 0;
    REP(i, N) A[i] /= 2;
    set<int> AS(ALL(A));
    int cm = 1;
    int size_AS = AS.size();
    VI ASV(ALL(AS));
    REP(i, size_AS) cm *= ASV[i];
    if(!(M/cm)) return 0;
    else return (M/cm-1)/2+1;
}


int main(void){
    int N, M;
    cin >> N >> M;
    VI A(N);
    REP(i, N) cin >> A[i];
    cout << Main(N, M, A) << endl;
    return 0;
}