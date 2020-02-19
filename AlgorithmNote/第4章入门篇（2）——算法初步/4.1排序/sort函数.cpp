#include <iostram>
#include <string>
using namespace std;
struct Student {
    char name[10];
    char id[10];
    int score;
    int r;
} stu[100000];

bool cmp(Student a, Student b)
{
    if (a.score != b.score) //分数不同，分高的排在前面
        return a.score > b.score;
    else //分数相同，姓名字典序小的排在前面
        return strcmp(a.name, b.name) < 0;
}
int main()
{
    //计算每个个体排名，分数不同排名不同，
    //分数相同排名相同但占用一个排位
    stu[0].r = 1;
    for (int i = 1; i < n; i++) {
        if (stu[1].score == stu[i - 1].score)
            stu[i].r = stu[i - 1].r;
        else
            stu[i].r = i + 1;
    }
    //题目不一定需要记录排名，直接输出
    //适用于输出信息过多，导致第一种方法代码冗长
    int r = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && stu[i].score != stu[i - 1].score)
            r = i + 1;
    }
    //输出当前个体信息，或者令stu[i].r = r
    return 0;
}//TODO remenber