#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


string Main(int A, int B)
{
    string AA, BB;
    REP(i, B) {
        AA += to_string(A);
    }
    REP(i, A) {
        BB += to_string(B);
    }
    return (AA <= BB) ? AA : BB;
}

int main(void){
    int A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}