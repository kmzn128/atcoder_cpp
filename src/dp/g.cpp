#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef long long ll;
typedef vector<ll> VL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<VL> VVL;

VI tsort(int N, int M, VL &x, VL &y, VVI &graph, VI &v) {
    stack<int> no_input_node;
    REP(i, N) {
        if(!v[i]) no_input_node.push(i);
    }
    VI ans;
    while(no_input_node.size()) {
        int node = no_input_node.top();
        no_input_node.pop();
        ans.push_back(node);
        for (auto &j : graph[node]) {
            v[j]--;
            if(!v[j]) no_input_node.push(j);
        }
    }
    return ans;

}

ll Main(int N, int M, VL &x, VL &y) {
    VVI graph(N, VI(0, 0));
    VI v(N, 0);
    REP(i, M) {
        graph[x[i]-1].push_back(y[i]-1);
        v[y[i]-1]++;
    }
    VI tsorted = tsort(N, M, x, y, graph, v);
    VL dp(N, 0);
    ll mx = 0;
    for (auto &i : tsorted) {
        for (auto &j : graph[i]) {
            dp[j] = max(dp[j], dp[i] + 1);
            mx = max(mx, dp[j]);
        }
    }
    return mx;
}

int main(void) {
    int N, M;
    cin >> N >> M;
    VL x(M), y(M);
    REP(i, M) cin >> x[i] >> y[i];
    cout << Main(N, M, x, y) << endl;
    return 0;
}