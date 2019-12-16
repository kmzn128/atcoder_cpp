#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ALL(v) (v).begin(), (v).end()

double Main(int N, VI &x, VI &y)
{
    double ans = 0.0;
    VI towns(N);
    REP(i, N) towns[i] = i;
    double nume = 0.0;
    double deno = 1.0;
    REP(i, N) deno *= (double)(i+1);
    do {
        REP(i, N-1) nume += sqrt(
             pow(x[towns[i]]-x[towns[i+1]], 2)
            +pow(y[towns[i]]-y[towns[i+1]], 2)
            );
    }while(next_permutation(ALL(towns)));
    ans = nume/deno;
    return ans;
}
 
int main(void){
    int N;
    cin >> N;
    VI x(N);
    VI y(N);
    REP(i, N) cin >> x[i] >> y[i];
    printf("%.10f\n",Main(N, x, y));
    return 0;
}