#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ALL(v) v.begin(), v.end() 

int Main(int N, VI &L)
{
    int ans = 0;
    sort(ALL(L));
    REP(i, N-2) {
        REP2(j, i+1, N-1) {
            int large = L[i]+L[j];
            int small = L[j]-L[i];
            auto it_s = upper_bound(ALL(L), small);
            auto it_l = lower_bound(ALL(L), large);
            if(it_s > L.begin() && it_l < L.end() 
            && it_s < it_l) {
                ans += int(it_l-it_s);
            }
        }
    }
    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI L(N);
    REP(i, N) cin >> L[i];
    cout << Main(N, L) << endl;
    return 0;
}