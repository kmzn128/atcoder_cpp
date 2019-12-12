#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

    
int Main(string s)
{
    unordered_map<string, int> days = {
        {"SUN",7},
        {"MON",6},
        {"TUE",5},
        {"WED",4},
        {"THU",3},
        {"FRI",2},
        {"SAT",1}
    };
    return days[s];
}

int main(void){
    string s;
    cin >> s;
    cout << Main(s) << endl;
    return 0;
}