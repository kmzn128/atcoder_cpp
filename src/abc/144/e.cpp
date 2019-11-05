#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

int Main(int &n, ll &k, VI &a, VI &f)
{
    sort(a.begin(), a.end());
    sort(f.rbegin(), f.rend());
    
}

int main(void)
{
    int n;
    ll k;
    cin >> n >> k;
    VI a(n);
    VI f(n);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> f[i];
    cout << Main(n, k, a, f) << endl;
    return 0;
}