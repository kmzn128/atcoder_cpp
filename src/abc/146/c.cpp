#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

int countDigit(int i) {
    return floor(log10(i)+1);
}

int Main(int A, int B, ll X)
{
    ll n = X/A;
    for(ll i = n; i >= 0; i--) {
        if(A*i > X) return 0;
        else if(A*i == X) continue;
        else {
            ll rem = X-A*i;
            ll d = countDigit(i);
            if(B*d >= rem) continue;
            else {
                if(i > pow(10, 9)) return pow(10, 9);
                else return int(i);
            };
        }
    }
}

int main(void){
    int A, B;
    ll X;
    cin >> A >> B >> X;
    cout << Main(A, B, X) << endl;
    return 0;
}