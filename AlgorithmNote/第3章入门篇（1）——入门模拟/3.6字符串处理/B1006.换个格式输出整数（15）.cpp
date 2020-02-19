#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b = 0, s = 0, g = 0;
    b = n / 100;
    s = n / 10 % 10;
    g = n % 10;
    for (int i = 0; i < b; i++)
        cout << 'B';
    for (int i = 0; i < s; i++)
        cout << 'S';
    for (int i = 0; i < g; i++)
        cout << i + 1;
    return 0;
} //TODO 进制转换