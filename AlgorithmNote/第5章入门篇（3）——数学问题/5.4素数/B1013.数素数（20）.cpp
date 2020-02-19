#include <cmath>
#include <iostream>
using namespace std;
const int maxn = 1000001;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    int sqr = (int)sqr(1.0 * n);
    for (int i = 2; i < sqr; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
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
    int m, n, count = 0;
    cin >> m >> n;
    Find_Prime(n);
    for (int i = m; i <= n; i++) {
        cout << prime[i - 1];
        count++;
        if (count % 10 != 0 && i < n)
            cout << " ";
        else
            cout << "\n";
    }
    return 0;
}