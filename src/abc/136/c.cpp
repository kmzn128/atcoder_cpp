#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define RREP(i, n) for (int i = (n); i >= 0 ; i--)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
#define RREP2(i, a, b) for (int i = (a); i >= (int)(b); i--)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


VI Main(int N, string S)
{
    vector<pair<int, int>> RL;
    pair<int, int> p({0,0});
    RL.push_back(p);
    bool turn = false;
    REP(i, N) {
        if(S[i] == 'R') {
            if(turn) {
                pair<int, int> p({0,0});
                RL.push_back(p);
                turn = false;
            }
            RL.back().first++;
        }
        else {
            if(!turn) turn = true;
            RL.back().second++;
        }
    }
    VI ans(N, 0);
    int N_RL = RL.size();
    int ind_ans = 0;
    REP(i, N_RL) {
        int sum = RL[i].first + RL[i].second;
        if(sum%2) { // odd
            if(RL[i].first > RL[i].second) {
                ans[ind_ans+RL[i].first-1] = sum/2+1;
                ans[ind_ans+RL[i].first] = sum/2;
            }
            else {
                ans[ind_ans+RL[i].first-1] = sum/2;
                ans[ind_ans+RL[i].first] = sum/2+1;
            }
        }
        else {
            ans[ind_ans+RL[i].first-1] = sum/2;
            ans[ind_ans+RL[i].first] = sum/2;
        }
        ind_ans += sum;
    }
    return ans;
}

int main(void){
    string S;
    cin >> S;
    int N = S.length();
    VI out = Main(N, S);
    REP(i, N) cout << out[i] << ' ';
    cout << endl;
    return 0;
}