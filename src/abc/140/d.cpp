#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()


int Main(int N, int K, string S)
{
    int ans = 0;
    VI chunks(1, -1);
    int counter = 0;
    char before = S[0];
    chunks[0]++;
    REP2(i, 1, N) {
        if(S[i] == before) {
            chunks[counter]++;
        }
        else {
            counter++;
            chunks.push_back(0);
        }
        before = S[i];
    }
    int subsum = accumulate(ALL(chunks), 0);
    return min(N-1, subsum + 2 * K);
}

int main(void){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    cout << Main(N, K, S) << endl;
    return 0;
}