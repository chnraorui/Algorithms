#include <iostream>
using namespace std;
//最大子列和
int main()
{
    int n;
    cin >> n;
    int a[100010];
    int maxSum = 0, thisSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        thisSum += a[i];//向右累加
        if (thisSum > maxSum)//发现更大的更新当前结果
            maxSum = thisSum;
        else if (thisSum < 0)//当前子列和为负数
            thisSum = 0;
    }
    cout << maxSum;
    return 0;
}