#include <iostream>
using namespace std;

int hashFunc1(char S[], int len)
{ //hash函数,将字符串S转换为整数(A-Z)
    int id = 0;
    for (int i = 0; i < len; i++)
        id = id * 26 + (S[i] - 'A'); //将二十六进制转换为十进制
    return id;
}

int hashFunc2(char S[], int len)
{
    //A-Z为0-25，a-z为26-51
    int id = 0;
    for (int i = 0; i < len; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z')
            id = id * 52 + (S[i] - 'A');
        else if (S[i] >= 'a' && S[i] <= 'z')
            id = id * 52 + (S[i] - 'a') + 26;
    }
    return id;
}
//若出现数字
//1.增大进制到62 2.末尾确定个数数字直接添加
int hashFunc3(char S[], int len)
{
    int id = 0;
    for (int i = 0; i < len - 1; i++)
        id = id * 26 + (S[i] - 'A');
    id = id * 10 + (S[len - 1] - '0');
    return 0;
}

const int maxn = 100;
char S[maxn][5], temp[5];
int hashTable[26 * 26 * 26 + 10];
int hashFunc(char S[], int len)
{
    int id = 0;
    for (int i = 0; i < len; i++)
        id = id * 26 + (S[i] - 'A');
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> S[i];
        int id = hashFunc(S[i], 3);
        hashTable[id]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> temp;
        int id = hashFunc(temp, 3);
        cout << hashTable[id] << endl;
    }
    return 0;
}