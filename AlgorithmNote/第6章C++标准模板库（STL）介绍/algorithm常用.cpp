#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    //max(x,y)min(x,y)比较
    //abs(x)绝对值
    //swap(x,y)交换x,y
    //reverse(it,it2)在[it,it2)之间的元素进行反转
    //next_permutation()给出一个序列在全排列中的下一个序列
    int a[10] = { 1, 2, 3 };
    do {
        cout << a[0] << a[1] << a[2];
    } while (next_permutation(a, a + 3));
    //fill()赋予相同值
    int a[5] = { 1, 2, 3, 4, 5 };
    fill(a, a + 5, 233); //将a[0]-a[4]均赋值为233
    //sort()
    //lower_bound()寻找范围内第一个值大于等于val元素的位置
    //upper_bound()寻找范围内第一个值大于val元素的位置
    lower_bound(first, last, val);
    upper_bound(first, last, val);

    return 0;
}