#include <iostream>
using namespace std;

struct factor {
    int x, cnt; //x为质因子，cnt为个数
} fac[10];

if (n % prime[i] == 0) { //如果prime[i]是n的因子
    fac[num].x = prime[i]; //记录该因子
    fac[num].cnt = 0;
    while (n % prime[i] == 0) { //计算出质因子prime[i]的个数
        fac[num].cnt++;
        n /= prime[i];
    }
    num++; //不同质因子，个数加一
}
if (n != 1) {
    fac[num].x = n;
    fac[num++].cnt = 1;
}
int main()
{
    return 0;
}