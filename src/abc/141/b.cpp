#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;


string Main(string S)
{
    int N = S.length();
    REP(i, N) {
        if(i%2) { // odd
            if(S[i] == 'R') return "No";
        }
        else {
            if(S[i] == 'L') return "No";
        }
    }
    return "Yes";
}

int main(void){
    string S;
    cin >> S;
    cout << Main(S) << endl;
    return 0;
}