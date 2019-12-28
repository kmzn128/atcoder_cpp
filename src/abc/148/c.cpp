#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;


ll Main(int A, int B)
{
    if(A < B) swap(A, B);
    ll M = (ll)A*B;
    int r = A % B;
    while(r > 0) {
        A = B;
        B = r;
        r = A % B;
    }
    return M/B;
}

int main(void){
    int A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}