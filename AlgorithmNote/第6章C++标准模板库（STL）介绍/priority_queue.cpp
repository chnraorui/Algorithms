#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<typename> name;
    //元素优先级设置
    //数字越大优先级越高
    //less<int>大的优先大，greater<int>小的优先大
    priority_queue<int, vector<int>, greater<int>> q;
    //结构体优先级设置
    struct fruit {
        string name;
        int price;
        //希望水果价格高的优先级高，需要重载overload，对已有的运算符重新定义
        //friend为友元
        friend bool operator<(fruit f1, fruit f2) //判断f1>f2
        {
            return f1.price < f2.price;
        } //优先队列函数与sort的cmp效果相反
    };
    struct cmp {
        bool operator()(fruit f1, fruit f2)
        {
            return f1.price > f2.price;
        }
    };
    priority_queue<fruit, vector<fruit>, cmp> q;
    return 0;
}