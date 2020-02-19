//auto 是C++11⾥里里⾯面的新特性，可以让编译器器根据初始值类型直接推断变量量的类型
#include <iostream>

using namespace std;

int main()
{
    auto x = 100;
    auto y = 1.5;
    //STL中使⽤用迭代器器的时候， auto 可以代替⼀一⼤大⻓长串串的迭代器器类型声明
    // 本来set的迭代器器遍历要这样写：
    // for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // 现在可以直接替换成这样的写法：
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}