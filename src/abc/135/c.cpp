#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


string Main(int N, VI &P)
{
    int counter = 0;
    REP(i, N) if(P[i] != i+1) counter++;
    return (counter == 2 || counter == 0) ? "YES" : "NO";

}

int main(void){
    int N;
    cin >> N;
    VI P(N);
    REP(i, N) cin >> P[i];
    cout << Main(N, P) << endl;
    return 0;
}