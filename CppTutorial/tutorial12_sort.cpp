/* sort 函数在头⽂文件 #include <algorithm> ⾥里里⾯面，主要是对⼀一个数组进⾏行行排序（ int arr[] 数组或
者 vector 数组都⾏行行）， vector 是容器器，要⽤用 v.begin() 和 v.end() 表示头尾；⽽而 int arr[] ⽤用 arr 表示数
组的⾸首地址， arr+n 表示尾部*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{                 // cmp函数返回的值是bool类型
    return a > b; // 从⼤大到⼩小排列列
}
int main()
{
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // 因为这⾥里里没有传⼊入参数cmp，所以按照默认， v从⼩小到⼤大排列列
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 10, cmp); // arr从⼤大到⼩小排列列，因为cmp函数排序规则设置了了从⼤大到⼩小
    return 0;
}