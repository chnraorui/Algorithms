#include <iostream>
#include <map>
using namespace std;

//想将两个元素邦在一起和为一个元素又不想因此定义结构体
struct pair {
    typeName1 first;
    typeName2 second;
};
pair<typeName1, typeName2> name;

int main()
{
    pair<string int> p;
    pair<string, int>("haha", 5);
    make_pair("haha", 5);
    cout << p.first << p.second;
    //比较操作，先比较first再比较second
    if (p1 < p3)
        printf(5, 10);
    
    return 0;
}