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


double Main(int N, VI &V)
{
    sort(ALL(V));
    double ave = (V[0] + V[1])/2.0;
    if(N == 2) return ave;
    REP2(i, 2, N) {
        ave = (V[i] + ave)/2.0;
    }
    return ave; 
}

int main(void){
    int N;
    cin >> N;
    VI V(N);
    REP(i, N) cin >> V[i];
    printf("%.12f\n", Main(N, V));
    return 0;
}