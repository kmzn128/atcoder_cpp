#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(int N, VI &A, VI &x, VI &y)
{
    
}

int main(void){
    int N;
    cin >> N;
    VI A(N, 0);
    VI x(0);
    VI y(0);
    int X, Y;
    REP(i, N) {
        cin >> A[i];
        REP(j, A[i]) {
            cin >> X >> Y;
            x.push_back(X);
            y.push_back(Y);
        }
    }
    cout << Main(N, A, x, y) << endl;
    return 0;
}