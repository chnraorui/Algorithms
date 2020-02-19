#include <iostream>
using namespace std;
//TODO remember
//将P进制的数x转换为十进制的数y
int y = 0, product = 1;
while (x != 0) {
    y = y + (x % 10) * product;
    x = x / 10;
    product = product * p;
}
//将十进制的数y转换为Q进制的数z
//除基取余法
int z[40], num = 0;
do {
    z[num++] = y % Q;
    y = y / Q;
} while (y != 0);