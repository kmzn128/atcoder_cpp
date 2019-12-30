#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<bool> VB;

int Main(int N, int K, int R, int S, int P, string T)
{
    int ans = 0;
    string perfect = "";
    unordered_map<char, char> win;
    win['p'] = 's';
    win['s'] = 'r';
    win['r'] = 'p';
    REP(i, N) {
        perfect.push_back(win[T[i]]);
    }
    REP2(i, K, N) {
        if(perfect[i] == perfect[i-K]) {
            perfect[i] = 'x';
        }
    }
    unordered_map<char, int> score;
    score['p'] = P;
    score['r'] = R;
    score['s'] = S;
    score['x'] = 0;
    REP(i, N) ans += score[perfect[i]];
    return ans;
}

int main(void){
    int N, K, R, S, P;
    string T;
    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;
    cout << Main(N, K, R, S, P, T) << endl;
    return 0;
}