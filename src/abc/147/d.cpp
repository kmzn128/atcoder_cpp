#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;
typedef vector<ll> VL;
ll const M = pow(10, 9) + 7;

int Main(int N, VL &A)
{
    ll sum = 0L;
    ll sum2 = 0L;
    REP(i, N-1) {
        REP2(j, i+1, N) {
            sum2 += (A[j] % M);
        }
        sum += (sum2 ^ A[i]) % M;
    }
    return (int)(sum % M);
}

int main(void){
    int N;
    cin >> N;
    VL A(N, 0);
    REP(i, N) {
        cin >> A[i];
    }
    cout << Main(N, A) << endl;
    return 0;
}