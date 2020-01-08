#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}


int Main(int A, int B)
{
    int n_tap = 0;
    int n_plug = 1;
    while(n_plug < B) {
        n_plug += A - 1;
        n_tap++;
    }
    return n_tap;
}

int main(void){
    int A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}