#include <iostream>
using namespace std;

int main()
{
    int c1, c2, cnt, CLK_TCK = 100;
    cin >> c1 >> c2;
    cnt = (c2 - c1 + 50) / CLK_TCK;
    printf("%02d:%02d:%02d", cnt / 3600, cnt % 3600 / 60, cnt % 60);
    return 0;
}//TODO 四舍五入 秒转化为小时