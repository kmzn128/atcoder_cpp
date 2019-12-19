#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(int N, VI &d)
{
    int sum = 0;
    REP(i, N-1) REP2(j, i+1, N) sum += d[i]*d[j];
    return sum;
}

int main(void){
    int N;
    cin >> N;
    VI d(N);
    REP(i, N) cin >> d[i];
    cout << Main(N, d) << endl;
    return 0;
}