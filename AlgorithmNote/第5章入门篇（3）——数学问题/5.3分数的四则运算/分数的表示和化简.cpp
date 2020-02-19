#include <iostream>
using namespace std;

struct Fraction { //分数的表示
    int up, down; //分子分母
};
Fraction reduction(Fraction result)
{ //分数的化简
    if (result.down < 0) { //分母为负数，分子分母都变为相反数
        result.up = -result.up;
        result.down = -result.down;
    }
    if (result.up == 0) //如果分子为0
        result.down = 1; //令分母为1
    else { //如果分子不为0，进行约分
        int d = gcd(abs(result.up), abs(result.down)); //分子分母公约数
        return.up /= d; //除以最大公约数
        return.down / = d;
    }
    return result;
}