#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
void to_array(int n, int num[])
{ //将n的每一位存到num数组中
    for (int i = 0; i < 4; i++) {
        num[i] = n % 10;
        n /= 10;
    }
}
int to_number(int num[])
{ //将num数组转换为数字
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum = sum * 10 + num[i];
    return sum;
}
int main()
{
    int n, min, max;
    cin >> n;
    int num[5];
    while (1) {
        to_array(n, num);
        sort(num, num + 4);
        min = to_number(num);
        sort(num, num + 4, cmp);
        max = to_number(num);
        n = max - min;
        printf("%04d - %04d = %04d\n", max, min, n);
        if (n == 0 || n == 6174)
            break;
    }
    return 0;
}