#include <iostream>
#include <map>
using namespace std;

int main()
{
    //map<typename1,typename2> mp;
    map<string, int> mp;
    map<set<int>, string> mp;
    //通过下标访问
    map<char, int> mp;
    mp['c'] = 20;
    mp['c'] = 30; //20被覆盖
    cout << mp['c'];
    //通过迭代器访问
    // map<typename1,typename2>::iterator it;
    mp['m'] = 20;
    mp['r'] = 30;
    mp['a'] = 40;
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        cout << it->first << it->second; //键 值
    //find(key)返回键为key的映射迭代器
    map<char, int>::iterator it = mp.find('b');
    cout << it->first << it->second;
    //mp.erase(it)删除单个元素it为元素迭代器
    map<char, int>::iterator it = mp.find('b');
    mp.erase(it);
    //mp.erase(key)
    mp.erase('b');
    //mp.erase(first,last)
    map<char, int>::iterator it = mp.find('b');
    mp.erase(it, mp.end());
    //size();
    //clear()
    
    return 0;
}