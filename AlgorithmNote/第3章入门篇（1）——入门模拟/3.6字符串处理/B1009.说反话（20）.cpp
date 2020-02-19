#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> v;
    string s;
    while (cin >> s)
        v.push(s); //将单词压栈
    cout << v.top();
    v.pop();
    while (!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
} //TODO:了解stack库
//另外方法再做