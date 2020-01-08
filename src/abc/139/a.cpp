#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()


int Main(string S, string T)
{
    int ans = 0;
    REP(i, 3) if(S[i] == T[i]) ans++;
    return ans;
}

int main(void){
    string S, T;
    cin >> S >> T;
    cout << Main(S, T) << endl;
    return 0;
}