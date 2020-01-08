#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()


ll Main(int N, int M, VI& A)
{
    sort(ALL(A));
    make_heap(ALL(A));
    REP(i, M) {
        int a = A.front();
        a >>= 1;
        pop_heap(ALL(A));
        A.pop_back();
        A.push_back(a);
        push_heap(ALL(A));
    }
    return accumulate(ALL(A), 0LL);
}

int main(void){
    int N, M;
    cin >> N >> M;
    VI A(N);
    REP(i, N) cin >> A[i];
    cout << Main(N, M, A) << endl;
    return 0;
}