#include <iostream>
using namespace std;
struct bign {
    int d[1000];
    int len;
    bign()
    { //构造函数初始化
        memset(d, 0, sizeof(d));
        len = 0
    }
};
bign add(bign a, bign b)
{
    bign c;
    int carry = 0; //进位
    for (int i = 0; i < a.len || i < b.len; i++) { //以较长的为界限
        int temp = a.d[i] + b.d[i] + carry; //两个对应位与进位相加
        c.d[c.len++] = temp % 10; //个位数为该位结果
        carry = temp / 10; //十位数为新的进位
    }
    if (carry != 0) //如果最后进位不为0，直接赋给结果的最高位
        c.d[c.len++] = carry;
    return c;
}

int main()
{
}