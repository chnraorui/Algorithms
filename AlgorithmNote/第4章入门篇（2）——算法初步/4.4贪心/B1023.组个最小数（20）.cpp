#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 0 };
    for (int i = 0; i < 10; i++)
        cin >> a[i]; //输入数的个数
    for (int i = 1; i < 10; i++) {
        if (a[i] > 0) {
            cout << i;
            a[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) {
            for (int j = 0; j < a[i]; j++)
                cout << i;
        }
    }

    return 0;
} //ac