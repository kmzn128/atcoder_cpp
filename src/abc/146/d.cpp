#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long ll;

int countDigit(int i) {
    return floor(log10(i)+1);
}

VI Main(int N, VI &a, VI &b)
{
    VI ans(0);
    map<int, int> tops;
    unordered_map<int, int> bottoms;
    REP(i, N) {
        if(tops.find(a[i]) == tops.end()) { 
            // key not found
            tops.insert({a[i], 1});
        }
        else { // key found
            tops[a[i]]++;
        }
        bottoms.insert({b[i], a[i]});
    }
ho    return ans;
}

int main(void){
    int N;
    cin >> N;
    VI a(N, 0);
    VI b(N, 0);
    REP(i, N) cin >> a[i] >> b[i];
    VI out = Main(N, a, b);
    int S = out.size();
    REP(i, S) cout << out[i] << endl;
    return 0;
}