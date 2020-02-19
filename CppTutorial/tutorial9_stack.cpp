//栈 stack 在头⽂文件 #include <stack> 中，是数据结构⾥里里⾯面的栈

#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<int> s; // 定义⼀一个空栈s
    for (int i = 0; i < 6; i++)
    {
        s.push(i); // 将元素i压⼊入栈s中
    }
    cout << s.top() << endl;  // 访问s的栈顶元素
    cout << s.size() << endl; // 输出s的元素个数
    s.pop();                  // 移除栈顶元素
    
    return 0;
}