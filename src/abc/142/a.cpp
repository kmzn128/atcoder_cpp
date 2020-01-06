#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

double Main(int N)
{
    if(N%2) {
        return double(N/2+1)/double(N);
    }
    else {
        return 0.5;
    }
}

int main(void){
    int N;
    cin >> N;
    printf("%.10f\n", Main(N));
    return 0;
}