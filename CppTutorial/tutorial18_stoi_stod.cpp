//使⽤用 stoi 、 stod 可以将字符串串 string 转化为对应的 int 型、 double 型变量量
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "123";
    int a = stoi(str);
    cout << a;
    str = "123.44";
    double b = stod(str);
    cout << b;
    return 0;
}
// stof (string to float)
// stold (string to long double)
// stol (string to long)
// stoll (string to long long)
// stoul (string to unsigned long)
// stoull (string to unsigned long long)