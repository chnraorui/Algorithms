//set 是集合，⼀一个 set ⾥里里⾯面的各元素是各不不相同的，⽽而且 set 会按照元素进⾏行行从⼩小到⼤大排序
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;                   //定义空集合s
    s.insert(1);                  //想集合中插入1
    cout << *(s.begin()) << endl; //输入集合s的第一个元素（前面的星号表示对指针取值）
    for (int i = 0; i < 6; i++)
    {
        s.insert(i);
    }

    for (auto it = s.begin(); it != s.end(); it++) //迭代器遍历集合s中的每一个元素
    {
        cout << *it << " ";
    }

    cout << endl                             //s.end()表示s的最后一个元素的下一个元素所在的位置
         << (s.find(2) != s.end()) << endl;  //查找集合s中的值，其结果等于s.end()表示没找到
    cout << (s.find(10) != s.end()) << endl; //s.find(10)!=s.end()表示能找到10这个元素

    s.erase(1); //删除集合s中的1这个元素

    cout << (s.find(1) != s.end()) << endl; //这时候找不到元素1

    return 0;
}
