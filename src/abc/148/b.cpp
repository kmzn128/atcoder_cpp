#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;


int Main(int a, int b)
{
    if(a == 1) {
        if(b == 2) return 3;
        else return 2;
    }
    if(a == 2) {
        if(b == 1) return 3;
        else return 1;
    }
    if(a == 3) {
        if(b == 1) return 2;
        else return 1;
    }
}

int main(void){
    int A, B;
    cin >> A;
    cin >> B;
    cout << Main(A, B) << endl;
    return 0;
}