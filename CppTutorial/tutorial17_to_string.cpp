#include <iostream>
#include <string>

using namespace std;

int main()
{
    //将数字转换为string类型
    string s1 = to_string(123); // 将123这个数字转成字符串串
    cout << s1 << endl;
    string s2 = to_string(4.5); // 将4.5这个数字转成字符串串
    cout << s2 << endl;
    cout << s1 + s2 << endl;           // 将s1和s2两个字符串串拼接起来并输出
    printf("%s\n", (s1 + s2).c_str()); // 如果想⽤用printf输出string，得加⼀一个.c_str()
    return 0;
}