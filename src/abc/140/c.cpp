#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()


int Main(int N, VI &B)
{
    VI A(N, 0);
    A[0] = B[0];
    REP2(i, 1, N) {
        A[i] = B[i-1];
        if(B[i-1] < A[i-1]) A[i-1] = B[i-1];
    }
    A[N-1] = B[N-2];
    return accumulate(ALL(A), 0);
}

int main(void){
    int N;
    cin >> N;
    VI B(N-1);
    REP(i, N-1) cin >> B[i];
    cout << Main(N, B) << endl;
    return 0;
}