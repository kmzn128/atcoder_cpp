#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

double Main(int N, int K, VI& h)
{
    int ans = 0;
    REP(i, N) if(h[i] >= K) ans++;
    return ans;
}

int main(void){
    int N, K;
    cin >> N >> K;
    VI h(N);
    REP(i, N) cin >> h[i];
    cout << Main(N, K, h) << endl;
    return 0;
}