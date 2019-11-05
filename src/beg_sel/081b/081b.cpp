#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> vec(n);
    REP(i, n)
    {
        cin >> vec.at(i);
    }
    int counter = 0;
    while(true)
    {
        REP(j, n)
        {
            if((vec.at(j) & 1) == 1)
            {
                cout << counter << endl;
                return 0;
            } 
            vec.at(j) >>= 1;
        }
        counter++;
    }
}
