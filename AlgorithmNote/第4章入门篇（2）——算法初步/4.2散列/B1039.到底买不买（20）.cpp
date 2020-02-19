#include <cstring>
#include <iostream>
using namespace std;
const int MAXN = 1010;
//记录每种颜色的个数   记录缺少的珠子个数
int hashTable[80] = { 0 }, miss = 0;

int change(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0'; //数字
    if (c >= 'a' && c <= 'z')
        return c - 'a' + '10'; //小写字母
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + '36'; //大写字母
}

int main()
{
    char whole[MAXN], target[MAXN];
    cin.getline(whole);
    cin.getline(target);
    int len1 = strlen(whole);
    int len2 = strlen(target);
    for (int i = 0; i < len1; i++) {
        int id = change(whole[i]);
        hashTable[id]++;
    }
    for (int i = 0; i < len2; i++) {
        int id = change(target[i]);
        hashTable[id]--;
        if (hashTable[id] < 0)
            miss++;
    }
    if (miss > 0)
        couta << "NO " << miss << endl;
    else
        cout << "Yes " << len1 - len2 << endl;
    return 0;
}