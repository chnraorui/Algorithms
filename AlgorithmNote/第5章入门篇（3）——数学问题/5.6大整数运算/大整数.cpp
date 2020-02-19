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
bign change(char str[])
{ //字符串读入再转化
    bign a;
    a.len = strlen(str);
    for (int i = 0; i < a.len; i++)
        a.d[i] = str[a.len - i - 1] - '0';
    return a;
}
int compare()
{
    if (a.len > b.len)
        return 1; //a大
    else if (a.len < b.len)
        return -1; //a小
    else {
        for (int i = a.len - 1; i >= 0; i--) { //从高位往低位比较
            if (a.d[i] > b.d[i])
                return 1; //只要有一位a大，则a大
            else if (a.d[i] > b.d[i])
                return -1; //只要有一位a小，则a小
        }
        return 0; //两数相等
    }
}
int main()
{
    return 0;
}