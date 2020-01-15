#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


int Main(int N, int K, int M, VI &A)
{
    int x = M*N - accumulate(ALL(A), 0);
    if(x <= K && x >= 0) return x;
    else if(x < 0) return 0;
    else return -1;
}

int main(void){
    int N, K, M;
    cin >> N >> K >> M;
    VI A(N-1);
    REP(i, N-1) cin >> A[i];
    cout << Main(N, K, M, A) << endl;
    return 0;
}