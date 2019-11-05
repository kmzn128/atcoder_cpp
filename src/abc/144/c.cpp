#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
#define RREP2(i, a, b) for (int i = (a); i > (int)(b); i--)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

ll Main(ll &n)
{
    ll sq = sqrt(n);
    ll a = 0;
    ll b = 0;
    for (ll i = sq; i > 0; i--)
    {
        if(n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    b = n / a;
    return a + b - 2;
}

int main(void){
    ll N;
    cin >> N;
    cout << Main(N) << endl;
    return 0;
}