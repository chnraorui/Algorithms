#include <iostream>
#include <string>

int main()
{
    string str;
    str = "abcd";
    // str.c_str(); //将string转换为字符数组
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++) {
        cout << *it;
    }
    //operator+=
    str3 = str1 + str2;
    //compare operator == != < >
    //insert(pos,string)在pos号为位置加入srting
    str.insert(3, str2);
    //insert(it,it2,it3)it为位置，it2，it3首尾
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    //erase(it)删除单个元素
    str.erase(str.begin() + 4);
    //erase(first,last)删除区间元素
    str.erase(str.begin() + 2, str.end() - 1);
    //str.erase(pos, length)pos为开始删除的起始位置，length为字符个数
    str.erase(3, 2);
    //clear()清空
    str.clear();
    //substr()返回从pos号位开始长度为len的子串
    substr(0, 5);
    //string::npos用作find函数失配时的返回值
    //str.find(str2)str2是str的字串返回第一次出现的位置，不是返回string::npos
    //str.find(str2,pos)从str的pos号开始匹配str2
    if (str.find(str2, 7) != string::npos)
        cout << str.find(str2, 7) << endl;
    //str.replace(pos,len,str2)把str从pos号开始，长度为len的字串替换为str2
    //str.replace(it1,it2,str2)把str的迭代器[it1,it2)范围的子串替换为str2
    str.replace(10, 4, str2);   
    str.replace(str.begin(), str.begin() + 5, str3);
    return 0;
}