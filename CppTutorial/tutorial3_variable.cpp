#include <iostream>

using namespace std;

int main()
{
    int n,m,count = 5;
    const int a = 999999; //C++特有定义常量
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        cout<<i;
    }
    for (int i = 0; i < m; i++)
    {
        cout<<i+2;
    }
    
    return 0;
}