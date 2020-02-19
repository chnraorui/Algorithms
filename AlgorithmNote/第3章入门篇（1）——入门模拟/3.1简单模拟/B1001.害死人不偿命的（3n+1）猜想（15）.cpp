#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;
    while (n != 1) {
        a++;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (3 * n + 1) / 2;
    }
    cout << a;
    return 0;
}//ac