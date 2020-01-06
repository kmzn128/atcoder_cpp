#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

VI Main(int N, VI& A)
{
    VI ans(N, 0);
    REP(i, N) ans[A[i]-1] = i+1;
    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI A(N);
    REP(i, N) cin >> A[i];
    VI out = Main(N, A);
    REP(i, N) cout << out[i] << ' ';
    cout << endl;
    return 0;
}