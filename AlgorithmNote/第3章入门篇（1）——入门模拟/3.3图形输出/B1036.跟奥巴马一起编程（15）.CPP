#include <iostream>
using namespace std;

int main()
{
    char c;
    int n,t;
    cin >> n >> c;
    t = n / 2 + n % 2;
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
    for (int i = 0; i < t - 2; i++) {
        cout << c;
        for (int i = 0; i < n - 2; i++) {
            cout << " ";
        }
        cout << c << endl;
    }

    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
    return 0;
}