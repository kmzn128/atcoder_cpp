#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
#define RREP2(i, a, b) for (int i = (a); i > (int)(b); i--)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

int Main(int N, VVI &g)
{
    map<int, vector<pair<int, int>>> mg;
    REP(i, N) {
        if(mg.find(g[i][0]) == mg.end()) { // not found
            vector<pair<int, int>> v;
            v.push_back({g[i][1], g[i][2]});
            mg.insert({g[i][0], v});
        }
        else { // found
            mg[g[i][0]].push_back({g[i][1], g[i][2]});
        }
        int b;
    }
    return 0;
}

int main(void){
    int N;
    cin >> N;
    VVI g(N, VI(3, 0));
    REP(i, N) {
        cin >> g[i][0] >> g[i][1] >> g[i][2];
    }
    Main(N, g);
    return 0;
}