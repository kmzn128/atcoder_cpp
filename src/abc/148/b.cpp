#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;


string Main(int N, string S, string T)
{
    string ans;
    REP(i, N) {
        ans.push_back(S[i]);
        ans.push_back(T[i]);
    }
    return ans;
}

int main(void){
    int N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    cout << Main(N, S, T) << endl;
    return 0;
}