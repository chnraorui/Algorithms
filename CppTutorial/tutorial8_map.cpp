/*map 是键值对，⽐比如⼀一个⼈人名对应⼀一个学号，就可以定义⼀一个字符串串 string 类型的⼈人名为“键”，
学号 int 类型为“值”，如 map<string, int> m; 当然键、值也可以是其它变量量类型～ map 会⾃自动将所有的
键值对按照键从⼩小到⼤大排序， map 使⽤用时的头⽂文件 #include <map>  */

/*unordered_map 在头⽂文件 #include <unordered_map> 中， unordered_set 在头⽂文件 #include
<unordered_set> 中～
unordered_map 和 map （或者 unordered_set 和 set ）的区别是， map 会按照键值对的键 key 进⾏行行
排序（ set ⾥里里⾯面会按照集合中的元素⼤大⼩小进⾏行行排序，从⼩小到⼤大顺序），⽽而 unordered_map （或
者 unordered_set ）省去了了这个排序的过程，如果偶尔刷题时候⽤用 map 或者 set 超时了了，可以考虑
⽤用 unordered_map （或者 unordered_set ）缩短代码运⾏行行时间、提⾼高代码效率～⾄至于⽤用法和
map 、 set 是⼀一样的～ */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m; //定义一个map 键是string类型，值是int类型

    m["hello"] = 2;             //将key设置为"hello",value为2的键值对存入map中
    cout << m["hello"] << endl; //访问值，若key不存在则返回0
    cout << m["world"] << endl;

    m["world"] = 3; //将"world"键对应值修改为3
    m[","] = 1;     //设置一组键值对，键为 ","值为1

    // 用迭代器遍历，输出map中所有元素，键用it->first获取，值用it->second获取
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << m.begin()->first << " " << m.begin()->second << endl;   //访问map的第一个元素，输出它的键和值
    cout << m.rbegin()->first << " " << m.rbegin()->second << endl; //访问map最后一个元素，输出他的键和值
    cout << m.size() << endl;                                       //输出map的元素个数

    return 0;
}