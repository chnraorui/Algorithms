#include <iostream>
using namespace std;

int main()
{
    int a, b, d, t;
    cin >> a >> b >> d;
    t = a + b;
    int s[100], i = 0;
    do {
        s[i++] = t % d;
        t = t / d;
    } while (t != 0);
    for (int j = i - 1; j >= 0; j--)
        cout << s[j];
    return 0;
} //TODO: remember