#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

string Main(int a, int b, int c)
{
    if(a+b+c >= 22) {
        return "bust";
    }
    else {
        return "win";
    }
}

int main(void){
    int A, B, C;
    cin >> A >> B >> C;
    cout << Main(A, B, C) << endl;
    return 0;
}