#include <iostream>

using namespace std;

int main()
{
    string s = "hello world"; //赋值字符串
    string s2 = s;
    string s3 = s + s2; //字符串拼接用+号
    string s4;
    cin >> s4; //读取控制台字符，以空格为分隔符
    cout << s3 << endl;
    cout << s4 << endl;

    string s5;
    getline(cin, s5);    //读取控制台一行的字符串，包括空格
    cout << s5.length(); //输出字符串长度（有几个字符就是几，不存在末尾的结束）

    string s6 = s5.substr(4);    //截取字符串中的字符，从下标4开始一直到结束
    string s7 = s5.substr(5, 3); //从下标5开始，3个字符
}