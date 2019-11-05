#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

double Main(double &a, double &b, double &x)
{
    double h = x / (a * a);
    double r = 0.0;
    if(h >= b / 2)
    {
        r = atan2(b-h, a/2);
    }
    else
    {
        double y = 2 * x / (a * b);
        r = atan2(b, y);
    }
    return r * 180 / acos(-1);
}

int main(void)
{
    double A, B, x;
    cin >> A >> B >> x;
    printf("%.10f\n", Main(A, B, x));
    return 0;
}