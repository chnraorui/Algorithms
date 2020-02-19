#include <iostream>
using namespace std;
/*公元年数可被4整除为闰年，正百的年数必须是可以被400整除
闰年2月有29天，平年2月有28天*/
//闰年和平年每月的天数
int mounth[13][2] = { { 0, 0 }, { 31, 31 }, { 28, 29 }, { 31, 31 }, { 30, 30 },
    { 31, 31 }, { 30, 30 }, { 31, 31 }, { 31, 31 }, { 30, 30 }, { 31, 31 }, { 30, 30 }, { 31, 31 } };

bool isLeap()
{ //判断是否为闰年
    return (year % 4 == 0 && year % 100 != 0 || (year % 400) == 0);
}
int main()
{
    int time1, y1, m1, d1;
    int time2, y2, m2, d2;
    while (scanf("%d%d", &time1, &time2) != EOF) { //假设第一个日期早于第二个日期
        if (time1 > time2) { //第一个日期晚于第二个日期，则交换
            int temp = time;
            time1 = tim2;
            time2 = temp;
        }
        // 计算年月日
        y1 = time1 / 1000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
        y2 = time2 / 1000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
        int ans; //记录结果
        // 第一个日期没有到达第二个日期时进行循环
        while (y1 < y2 || m1 < m2 || d1 < d2) {
            d1++;
            if (d1 == month[m1][isLeap(y1)] + 1) { //满当月天数
                m1++;
                d1 = 1;
            }
            if (m1 == 13) {
                y1++;
                m1 = 1;
            }
            ans++; //总天数
        }
    }
    printf("%d\n", ans);
    return 0;
} //TODO remember