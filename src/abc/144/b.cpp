#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

string Main(int &n)
{
    if(n >= 1 && n <= 9)
    {
        return "Yes";
    }
    else
    {
        REP2(i, 2, 10)
        {
            if(n % i == 0)
            {
                int d = n / i;
                if(d >= 1 && d <= 9)
                {
                    return "Yes";
                }
            }
        }
        return "No";
    }
}


int main(void){
    int N;
    cin >> N;
    cout << Main(N) << endl;
    return 0;
}