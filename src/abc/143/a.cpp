#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(int a, int b)
{
    int c = a-b*2;
    return (c >= 0) ? c : 0;
}

int main(void){
    int A, B;
    cin >> A >> B;
    cout << Main(A, B) << endl;
    return 0;
}