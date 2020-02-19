#include <iostream>
using namespace std;
int count = 0;
void generateP()
{
    if (index == n + 1) {
        bool flag = true;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (abs(i - j) == abs(P[i] - P[j])) {
                    flag = false; //不合法
                }
            }
        }
        if (flag)
            count++;
        return;
    }
    for (int x = 1; x <= n; x++) {
        if (hashTable[x] == false) {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}
int main()
{
    return 0;
}