#include <cstdio>
const int maxn = 100010;
bool hashTable[maxn] = { false };

//m个数中的每个数是否在n个数中出现过
//用空间换时间，设定bool型数组hashTable[100010]
//hashTable[x] = false表示x在N个正整数中没有出现过，读入x时令hashTable[x] = true
int main()
{
    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        hashTable[x] = true; //数字出现过
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (hashTable[x] == true)
            cout << "YES\n";
        else
            cout << "NO";
    }
    return 0;
}//线性探查法，平方探查法，链地址法
