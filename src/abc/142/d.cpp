#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

ll Euclidean(ll A, ll B)
{
    if(A < B) swap(A, B);
    ll r = A % B;
    while(r > 0) {
        A = B;
        B = r;
        r = A % B;
    }
    return B;
}

ll Main(ll A, ll B)
{
    ll r = Euclidean(A, B);
    ll ans = 1;
    ll mx = r;
    for(ll i = 2; i*i <= mx; i++) {
        if(r%i) continue;
        else {
            ans++;
            while(!(r%i)) r/=i;
        }
    }
    if(r>1) ans++;
    return ans;
}

int main(void){
    ll A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}