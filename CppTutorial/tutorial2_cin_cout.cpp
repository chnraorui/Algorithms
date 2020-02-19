#include <iostream> //输入输出流

// C++的头文件一般是没有像C语言的.h这样的扩展后缀的，
// 一般情况下C语言里面的头文件去掉.h然后在前面加个c就可以继续在C++文件中使用C语言头文件中的函数啦~比如：
#include <cmath> //include<math.h>
#include <cstdio>
#include <cctype>
#include <cstring>

using namespace std; // 空间变量名

int main()
{
    int n;
    //无空间变量名写法
    // std::cin>>n
    // std::cout<< "hello, Raorui" << n + 1 << endl;

    cin >> n;                                 //scanf("%d",n); 向右的箭头表示将内容输入到n中
    cout << "hello, Raorui" << n + 1 << endl; //printf("%d",n); 向左箭头 endl表示\n

    return 0;
}