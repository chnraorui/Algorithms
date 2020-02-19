#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    int sqr = (int)sqr(1.0 * n); //根号n
    for (int i = 2; i < sqr; i++) {
        if (n % i == 0)
            return false; //n是i的整数倍，则n不是素数
    }
    return true;
}
const int maxn = 101;
int prime[maxn], pNum = 0; //存放素数，素数个数
bool p[maxn] = { 0 };
void Find_Prime()
{
    for (int i = 1; i < maxn; i++) {
        if (isPrime(i) == true) {
            prime[pNum++] = i;
            p[i] = true;
        }
    }
}
//筛选法
const int maxn = 101;
int prime[maxn], pNum = 0; //存放素数，素数个数
bool p[maxn] = { 0 };
void Find_Prime()
{
    for (int i = 2; i < maxn; i++) {
        if (p[i] == false) {
            prime[pNum++] = i;
            for (int j = i + i; j < maxn; j++) {
                //筛去所有i的倍数
                p[j] = true;
            }
        }
    }
}
int main()
{

    return 0;
}