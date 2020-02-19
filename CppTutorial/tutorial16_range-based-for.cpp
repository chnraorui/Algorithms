#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {0, 1, 2, 3};
    for (int i : arr)
        cout << i << endl; // 输出数组中的每⼀一个元素的值，每个元素占据⼀一⾏行

    //上述只能输出不能修改要修改需要加地址符&

    for (int &i : arr) // i为引⽤用变量量
        i = i * 2;     // 将数组中的每⼀一个元素都乘以2， arr[4]的内容变为了了{0, 2, 4, 6}
    //配上auto循环容器
    for (auto i : v)
        cout << i << " ";
    // 上⾯面的写法等价于
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
