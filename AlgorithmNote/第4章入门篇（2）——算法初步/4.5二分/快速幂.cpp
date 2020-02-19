#include <iostream>
using namespace std;
typedef long long LL;
LL pow(LL a, LL b, LL m)
{
    LL ans = 1;
    for (int i = 0; i < b; i++)
        ans = ans * a % m;
    return ans;
}

LL binaryPow(LL a, LL b, LL m)
{ //求a^b%m,递归写法
    if (b == 0) //b为0，a^0 = 1
        return 0;
    if (b % 2 == 1) //b为奇数数，转化为b/2
        return a * binaryPow(a, b - 1, m) % m;
    else { //b为偶数，转化为b/2
        LL mul = binaryPow(a, b / 2, m);
        return mul * mul % m;
    }
}
LL binaryPow(LL a, LL b, LL m)
{ //求a^b%m,迭代写法
    LL ans = 1;
    while (b > 0) {
        if (b & 1)
            ans = ans * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return ans;
}
int main()
{

    return 0;
}
