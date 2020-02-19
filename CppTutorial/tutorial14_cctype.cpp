/*#include <cctype> 本质上来源于C语⾔言标准函数库中的头⽂文件 #include
<ctype.h> ，其实并不不属于C++新特性的范畴，在刷PAT⼀一些字符串串逻辑题的时候也经常⽤用到 */

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char c;
    cin >> c;
    // if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    // {
    //     cout << "c is alpha";
    // }
    if (isalpha(c)) //判断一个字符是否是字母
    {
        cout << "c is alpha";
    }

    char c = 'A';
    char t = tolower(c); // 将c字符转化为⼩小写字符赋值给t，如果c本身就是⼩小写字符也没有关系
    cout << t;           // 此处t为'a'
    
    return 0;
}
// isalpha 字⺟母（包括⼤大写、⼩小写）
// islower （⼩小写字⺟母）
// isupper （⼤大写字⺟母）
// isalnum （字⺟母⼤大写⼩小写+数字）
// isblank （space和 \t ）
// isspace （ space 、 \t 、 \r 、 \n ）