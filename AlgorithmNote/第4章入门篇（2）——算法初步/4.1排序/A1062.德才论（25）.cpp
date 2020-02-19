#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

struct Student {
    char id[10];
    int de, cai, sum;
    int flag;
} stu[10010];

bool cmp(Student a, Student b)
{
    //类别
    if (a.flag != b.flag)
        return a.flag < b.flag;
    //总分
    else if (a.sum != b.sum)
        return a.sum > b.sum;
    //德分
    else if (a.de != b.de)
        return a.de > b.de;
    //准考证
    else
        return strcmp(a.id, b.id) < 0;
}

int main()
{
    int n, l, h;
    cin >> n >> l >> h;
    int m = n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].id >> stu[i].de >> stu[i].cai;
        if (stu[i].de < l && stu[i].cai < l) {
            stu[i].flag = 5;
            m--;
        } else if (stu[i].de >= h && stu[i].cai >= h)
            stu[i].flag = 1;
        else if (stu[i].de >= h && stu[i].cai < h)
            stu[i].flag = 2;
        else if (stu[i].de >= stu[i].cai)
            stu[i].flag = 3;
        else
            stu[i].flag = 4;
    }
    sort(stu, stu + n, cmp);
    cout << m << endl;
    for (int i = 0; i < m; i++)
        printf("%s %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
    return 0;
}//TODO CUOWU