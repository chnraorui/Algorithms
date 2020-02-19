#include <iostream>
using namespace std;
int main()
{
    int a[] = { 3, 1, 4, 5, 2 };
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < 5 - i; j++) {
            int temp = a[j];
            if (a[j] > a[j + 1]) {
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        cout << a[i];
    return 0;
}