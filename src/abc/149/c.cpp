#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<bool> VB;


int Main(int X)
{
    int MAX = 100100;
    VB isPrime(MAX, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i*i <= MAX; i++) {
        if(isPrime[i]) {
            for(int j = 2; i*j <= MAX; j++) {
                isPrime[i*j] = false;
            }
        }
    }
    for(int i = X; i < MAX; i++) {
        if(isPrime[i]) return i;
    }
    return X;    
}

int main(void){
    int X;
    cin >> X;
    cout << Main(X) << endl;
    return 0;
}