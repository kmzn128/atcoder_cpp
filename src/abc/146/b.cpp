#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

string Main(int N, string s)
{
    const string AL = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int S = s.size();
    string ans;
    REP(i, S) {
        int ind = (s[i]-'A'+N) % 26;
        ans.push_back(AL[ind]);
    }
    return ans;
}

int main(void){
    int N;
    cin >> N;
    string s;
    cin >> s;
    cout << Main(N, s) << endl;
    return 0;
}