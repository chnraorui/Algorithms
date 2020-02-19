#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm()
{
    return ((x * y) / gcd(x, y));
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n);
    cout << lcm(m, n);
}