#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;


string Main(string S, string T)
{
    return T+S;
}

int main(void){
    string S, T;
    cin >> S >> T;
    cout << Main(S, T) << endl;
    return 0;
}