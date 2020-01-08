#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;


VS Main(int N, int K, int Q, VI& A)
{
    VS ans(N);
    VI scores(N, 0);
    REP(i, Q) scores[A[i]-1]++;
    REP(i, N) ans[i] = (K + scores[i] - Q > 0) ? "Yes" : "No";
    return ans;
}

int main(void){
    int N, K, Q;
    cin >> N >> K >> Q;
    VI A(Q);
    REP(i, Q) cin >> A[i];
    VS out = Main(N, K, Q, A);
    REP(i, N) cout << out[i] << endl;
    return 0;
}