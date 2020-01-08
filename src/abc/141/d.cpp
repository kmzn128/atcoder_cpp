#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;


ll Main(int N, int M, VI& A)
{
    sort(A.begin(), A.end());
    REP(i, M) {
        int a = A[N-1] >>= 1;
        A.erase(A.end()-1);
        auto p = lower_bound(A.begin(), A.end(), a);
        A.insert(p, a);
    }
    return accumulate(A.begin(), A.end(), 0LL);
}

int main(void){
    int N, M;
    cin >> N >> M;
    VI A(N);
    REP(i, N) cin >> A[i];
    cout << Main(N, M, A) << endl;
    return 0;
}