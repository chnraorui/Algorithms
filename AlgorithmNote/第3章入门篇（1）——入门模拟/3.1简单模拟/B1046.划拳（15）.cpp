#include <iostream>
using namespace std;

int main()
{
    int n, jiahan, jiahua, yihan, yihua, jia = 0, yi = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        if (jiahua == jiahan + yihan && yihua != jiahan + yihan)
            yi++;
        if (yihua == jiahan + yihan && jiahua != jiahan + yihan)
            jia++;
    }
    cout << jia << " " << yi;
    return 0;
} //TODO 平局情况 注意输出格式