/*C语⾔言⾥里里⾯面⽤用 int arr[] 定义数组，它的缺点是数组的⻓长度不不能随⼼心所欲的改变，⽽而C++⾥里里⾯面有⼀一个
能完全替代数组的动态数组 vector （有的书⾥里里⾯面把它翻译成⽮矢量量， vector 本身就是⽮矢量量、向量量的意
思，但是叫做动态数组或者不不定⻓长数组我觉得更更好理理解，绝⼤大多数中⽂文⽂文档中⼀一般不不翻译直接叫它
vector～），它能够在运⾏行行阶段设置数组的⻓长度、在末尾增加新的数据、在中间插⼊入新的值、⻓长度任
意被改变，很好⽤用～它在头⽂文件 vector ⾥里里⾯面，也在命名空间 std ⾥里里⾯面 */

/*vector 、 stack 、 queue 、 map 、 set 这些在C++中都叫做容器器，这些容器器的⼤大⼩小都可以⽤用 .size()
获取到，就像 string s 的⻓长度⽤用 s.length() 获取⼀一样～（ string 其实也可以⽤用 s.size() ，不不过对于
vector 、 stack 、 queue 、 map 、 set 这样的容器器我们⼀一般讨论它的⼤大⼩小 size ，字符串串⼀一般讨论
它的⻓长度 length ～其实 string ⾥里里⾯面的 size 和 length 两者是没有区别、可以互换使⽤用的， */

/*容器器 vector 、 set 、 map 这些遍历的时候都是使⽤用迭代器器访问的， c.begin() 是⼀一个指针，指向容器器
的第⼀一个元素， c.end() 指向容器器的最后⼀一个元素的后⼀一个位置，所以迭代器器指针 it 的for循环判断条
件是 it != c.end() */
#include <iostream>
#include <vector>
/*vector 可以⼀一开始不不定义⼤大⼩小，之后⽤用 resize ⽅方法分配⼤大⼩小，也可以⼀一开始就定义⼤大⼩小，之后还可以
对它插⼊入删除动态改变它的⼤大⼩小～⽽而且不不管在 main 函数⾥里里还是在全局中定义，它都能够直接将所有
的值初始化为0（不不⽤用显式地写出来，默认就是所有的元素为0），再也不不⽤用担⼼心C语⾔言⾥里里⾯面出现的那
种 int arr[10]; 结果忘记初始化为0导致的各种bug啦～ */
using namespace std;

int main()
{
    vector<int> v;    // 定义⼀一个vector v1，定义的时候没有分配⼤大⼩小
    cout << v.size(); // 输出vector v1的⼤大⼩小，此处应该为0

    vector<int> v1(10); // 直接定义⻓长度为10的int数组，默认这10个元素值都为0
    // 或者
    vector<int> v2;
    v1.resize(8); //先定义⼀一个vector变量量v1，然后将⻓长度resize为8，默认这8个元素都是0
    // 在定义的时候就可以对vector变量量进⾏行行初始化

    vector<int> v3(100, 9); // 把100⻓长度的数组中所有的值都初始化为9
    // 访问的时候像数组⼀一样直接⽤用[]下标访问即可～(也可以⽤用迭代器器访问，下⾯面会讲～)
    v[1] = 2;
    cout << v[0];

    vector<int> a;            // 定义的时候不不指定vector的⼤大⼩小
    cout << a.size() << endl; // 这个时候size是0
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i); // 在vector a的末尾添加⼀一个元素i
    }
    cout << a.size() << endl; // 此时会发现a的size变成了了10
    vector<int> b(15);        // 定义的时候指定vector的⼤大⼩小，默认b⾥里里⾯面元素都是0
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        b[i] = 15;
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    vector<int> c(20, 2); // 定义的时候指定vector的⼤大⼩小并把所有的元素赋⼀一个指定的值
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    for (auto it = c.begin(); it != c.end(); it++)
    { // 使⽤用迭代器器的⽅方式访问vector
        cout << *it << " ";
    }

    return 0;
}