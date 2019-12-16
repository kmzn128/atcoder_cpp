#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

string Main(int N, string s)
{
    int T1 = N/2;
    string t1 = s.substr(0, T1);
    string t2 = s.substr(T1, N-T1);
    return (t1 == t2) ? "Yes" : "No";
}
 
int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;
    cout << Main(N, S) << endl;
    return 0;
}