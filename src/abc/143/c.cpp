#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(int N, string s)
{
    int ans = 1;
    REP2(i, 1, N) if(s[i-1] != s[i]) ans++;
    return ans;
}

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;
    cout << Main(N, S) << endl;
    return 0;
}