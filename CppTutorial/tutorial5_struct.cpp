#include <iostream>

using namespace std;

struct stu
{
    int grade;
    float score;
};

struct stu arr1[10]; //C语言里面需要写成struct stu
stu arr2[10];        //C++里面不用写struct,直接写stu

//C++的引用&和传值的区别
// 这个引⽤用符号 & 要和C语⾔言⾥里里⾯面的取地址运算符 & 区分开来，他们没有什什么关系， C++⾥里里⾯面的引⽤用是
// 指在变量量名之前加⼀一个 & 符号，⽐比如在函数传⼊入的参数中 int &a ，那么对这个引⽤用变量量 a 做的所有
// 操作都是直接对传⼊入的原变量量进⾏行行的操作，并没有像原来 int a ⼀一样只是拷⻉贝⼀一个副本（传值）

void func(int &a) //传入的是n的引用，相当于直接对n进行操作，只不过在func中换了一个名字叫a
{
    a = 99;
    cout << a << endl;
}

void func1(int a) //传入的是0这个值不会改变main函数中n的值
{
    a = 99;
    cout << a << endl;
}

int main(void)
{

    int n = 0;
    int b = 0;

    func(b);  //n由0变成99
    func1(n); //不会改变n的值，还是0

    return 0;
}
