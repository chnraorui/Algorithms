/*sort 默认是从⼩小到⼤大排列列的，也可以指定第三个参数 cmp 函数，然后⾃自⼰己定义⼀一个 cmp 函数指定
排序规则～ cmp 最好⽤用的还是在结构体中，尤其是很多排序的题⽬目～⽐比如⼀一个学⽣生结构体 stu 有学
号和成绩两个变量量，要求如果成绩不不同就按照成绩从⼤大到⼩小排列列，如果成绩相同就按照学号从⼩小到⼤大
排列列，那么就可以写⼀一个 cmp 数组实现这个看上去有点复杂的排序过程： */
#include <iostream>
using namespace std;

struct stu
{ // 定义⼀一个结构体stu， number表示学号， score表示分数
    int number;
    int score;
}

bool
cmp(stu a, stu b)
{                           // cmp函数，返回值是bool，传⼊入的参数类型应该是结构体stu类型
    if (a.score != b.score) // 如果学⽣生分数不不同，就按照分数从⼤大到⼩小排列列
        return a.score > b.score;
    else // 如果学⽣生分数相同，就按照学号从⼩小到⼤大排列列
        return a.number < b.number;
}

// 有时候这种简单的if-else语句句我喜欢直接⽤用⼀一个C语⾔言⾥里里⾯面的三⽬目运算符表示～
bool cmp1(stu a, stu b)
{
    return a.score != b.score ? a.score > b.score : a.number < b.number;
}
/*sort 函数的 cmp 必须按照规定来写，即必须只是 > 或者 < ，⽐比如： return a > b; 或
者 return a < b; ⽽而不不能是 <= 或者 >= ，因为快速排序的思想中， cmp 函数是当结果为 false 的
时候迭代器器指针暂停开始交换两个元素的位置，当 cmp 函数 return a <= b 时，若中间元素前⾯面的
元素都⽐比它⼩小，⽽而后⾯面的元素都跟它相等或者⽐比它⼩小，那么 cmp 恒返回 true ，迭代器器指针会不不
断右移导致程序越界，发⽣生段错误～ */