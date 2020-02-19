#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b > c)
            cout << "Case #" << i + 1 << ": true" << endl;

        else
            cout << "Case #" << i + 1 << ": false" << endl;
    }
    return 0;
} //ac
