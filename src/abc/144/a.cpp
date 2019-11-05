#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(int &a, int &b)
{
    return (a >=1 && a <= 9 && b >= 1 && b <= 9) ? a * b : -1;
}

int main(void){
    int A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}