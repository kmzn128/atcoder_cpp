#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;


int Main(int N, VI &A, VI &B, VI &C)
{
    int ans = B[A[0]-1];
    REP2(i, 1, N) {
        ans += B[A[i]-1];
        if(A[i-1]+1 == A[i]) ans += C[A[i]-2];
    }
    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI A(N), B(N), C(N-1);
    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];
    REP(i, N-1) cin >> C[i];
    cout << Main(N, A, B, C) << endl;
    return 0;
}