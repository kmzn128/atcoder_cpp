#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int Main(string s)
{
    int S = s.size();
    int counter = 0;
    int mid = S/2;
    if(S%2) { // S is odd
        for(int i = 1; i <= mid; i++) {
            if(s[mid+i] != s[mid-i]) counter++;
        }
    }
    else { // S is even
        for(int i = 0; i < mid; i++) {
            if(s[mid+i] != s[mid-i-1]) counter++;
        }
    }
    return counter;
}

int main(void){
    string s;
    cin >> s;
    cout << Main(s) << endl;
    return 0;
}