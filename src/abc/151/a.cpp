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


char Main(char C)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    auto it = find(ALL(alphabet), C);
    return *(it+1);
}

int main(void){
    char C;
    cin >> C;
    cout << Main(C) << endl;
    return 0;
}