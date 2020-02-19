#include <algorithm>
#include <iostream>
using namespace std;
const int maxn = 110;
struct Inteval {
    int x, y; //开区间端点
} I[maxn];
bool cmp(Inteval a, Inteval b)
{
    if (a.x != b.x)
        return a.x > b.x;
    else
        return a.y < b.y;
}
//给出N个开区间使得开区间两两没有交集
int main()
{
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> I[i].x >> I[i].y;
        sort(I, I + n, cmp);
        //ans记录不相交区间的个数，lastx记录上一个被选中的左端点
        int ans = 1, lastX = I[0].x;
        for (int i = 0; i < n; i++) {
            if (I[i].y <= lastX) { //如果区间右端点在lastx左边
                lastX = I[i].x; //以I[i]作为新选中的区间
                ans++;
            }
        }
        cout >> ans;
    }
    return 0;
}