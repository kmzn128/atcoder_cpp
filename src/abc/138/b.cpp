#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


double Main(int N, VI &A)
{
    double ans = 0.0;
    REP(i, N) ans += 1.0 / A[i];
    return 1.0/ans; 
}

int main(void){
    int N;
    cin >> N;
    VI A(N);
    REP(i, N) cin >> A[i];
    printf("%.12f\n", Main(N, A));
    return 0;
}